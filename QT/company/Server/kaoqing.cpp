#include "kaoqing.h"
#include "ui_kaoqing.h"

kaoqing::kaoqing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kaoqing)
{
    ui->setupUi(this);
    model=new QSqlTableModel(this);
    mode2=new QSqlTableModel(this);
    mode3=new QSqlTableModel(this);



    model->setTable("Leader");
    model->select();

    mode2->setTable("Sales");
    mode2->select();
    mode3->setTable("Research");
    mode3->select();

    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    mode2->setEditStrategy(QSqlTableModel::OnManualSubmit);
    mode3->setEditStrategy(QSqlTableModel::OnManualSubmit);


    ui->tableView->setModel(model);
    ui->tableView_2->setModel(mode2);
    ui->tableView_3->setModel(mode3);
}

kaoqing::~kaoqing()
{
    delete ui;
}

void kaoqing::on_return_main_clicked()
{
    close();
}

void kaoqing::on_save_clicked()
{
    if(ui->tabWidget->currentIndex()==0)
        {
            model->database().transaction();
            if(model->submitAll())
            {
                model->database().commit();//提交
            }
            else
            {
                model->database().rollback();//回滚
                QMessageBox::warning(this,tr("tableModel"),tr("database error:%1").arg(model->lastError().text()));
            }
        }
        if(ui->tabWidget->currentIndex()==1)
           {
               mode2->database().transaction();
               if(mode2->submitAll())
               {
                   mode2->database().commit();//提交
               }
               else
               {
                   mode2->database().rollback();//回滚
                   QMessageBox::warning(this,tr("tableModel"),tr("database error:%1").arg(model->lastError().text()));
               }
           }
        if(ui->tabWidget->currentIndex()==2)
           {
               mode2->database().transaction();
               if(mode3->submitAll())
               {
                   mode3->database().commit();//提交
               }
               else
               {
                   mode3->database().rollback();//回滚
                   QMessageBox::warning(this,tr("tableModel"),tr("database error:%1").arg(model->lastError().text()));
               }
           }
}
