#include "fanancial.h"
#include "ui_fanancial.h"
#include <vector>
using namespace std;
fanancial::fanancial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fanancial)
{
    ui->setupUi(this);
    model=new QSqlTableModel(this);



    model->setTable("Wage");
    model->select();


    model->setEditStrategy(QSqlTableModel::OnManualSubmit);


    ui->tableView_wage->setModel(model);


}

fanancial::~fanancial()
{
    delete ui;
}

void fanancial::on_return_main_clicked()
{
    close();
}

void fanancial::on_save_clicked()
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

void fanancial::on_get_names_clicked()
{
    QSqlQuery query;
    QVector<QString> name;
    QVector<QString> job;
   QVector<QString> age;
    int i,j;
    QString Data="insert into Wage values(";
    query.exec("select * from leader");
    while(query.next())
    {
     name.append(query.value(1).toString());
     job.append(query.value(3).toString());
    age.append(query.value(2).toString());
    }
    query.exec("select * from Sales");
    while(query.next())
    {
     age.append(query.value(2).toString());
     name.append(query.value(1).toString());
     job.append(query.value(3).toString());
    }
    query.exec("select * from Research");
    while(query.next())
    {
   age.append(query.value(2).toString());
     name.append(query.value(1).toString());
     job.append(query.value(3).toString());
    }
    query.exec("select * from Wage");
    j=model->rowCount();
   while(j>0)
    {
        model->removeRow(--j);
        model->submitAll();

    }
    j=model->rowCount();
     qDebug()<<j;
    for(i=0;i<name.size();i++)
    {
        QString Data2="";
        QString s=QString::number(i+1, 10);

       Data2=Data+s+","+"'"+name.at(i)+"'"+","+age.at(i)+","+"'"+job.at(i)+"'"+","+"'"+" "+"'"+","+"'"+" "+"'"")";

       qDebug()<<Data2;
       query.exec(QString(Data2));
    }

    model->setTable("Wage");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    j=model->rowCount();
    qDebug()<<j;

    //ui->tableView_wage->setModel(model);

}
