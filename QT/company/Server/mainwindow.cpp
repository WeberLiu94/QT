#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSqlQueryModel>
#include<QSqlTableModel>
#include<QSqlRelationalTableModel>
#include<QTableView>
#include<QDebug>
#include<QMessageBox>
#include<QSqlError>
#include<QFile>
#include<QStandardItem>
#include"connection.h"
#include<QFileDialog>
#include"qexcel.h"
#include"excelengine.h"
#include"labor.h"
#include "connection.h"
#include "fanancial.h"


MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::MainWindow)
{

   ui->setupUi(this);
   //
   setFixedSize(880,450);
//   QSqlQuery query;
//   query.exec("select * from leader");
//   while(query.next())
//   {
//    qDebug()<<query.value(0).toInt()<<query.value(1).toString();
//   }

    ui->background->setPixmap(QPixmap("image_s/background.png"));
   connect(ui->Labor,SIGNAL(clicked()),this,SLOT(Laborshow()));
}






MainWindow::~MainWindow()
{
   delete ui;
}



//void MainWindow::on_but_id_up_clicked()//id升序排列按钮
//{
//    //ID字段，即低0个字段，升序排列
//    if(ui->tabWidget->currentIndex()==0)
//    {
//        model->setSort(0,Qt::AscendingOrder);
//        model->select();
//    }

//}

//void MainWindow::on_but_id_down_clicked()//id降序排列按钮
//{
//    if(ui->tabWidget->currentIndex()==0)
//    {
//        model->setSort(0,Qt::DescendingOrder);
//        model->select();
//    }

//}













//void MainWindow::on_Import_excle_clicked()
//{
//    QString FileName=QFileDialog::getOpenFileName(this,tr("选择文件"),"F:",tr("文档(* xlsx)"));
//   qDebug()<<"FileName"<<FileName;
//    ExcelEngine exc;
//     QSqlDatabase db;
//     QSqlQuery query(db);
//    int hang;
//    exc.Open(FileName);

//    hang=exc.GetRowCount();
//    for(int i=2;i<=hang;i++)
//    {
//            QString Data="insert into Student values(";
//            QString id=exc.GetCellData(i,1).toString();
//            QString name=exc.GetCellData(i,2).toString();
//            QString age=exc.GetCellData(i,3).toString();
//            QString situation=exc.GetCellData(i,4).toString();
//            Data=Data+id+","+"'"+name+"'"+","+age+","+situation+")";
//            qDebug()<<Data;
//            QSqlQuery query(db);
//            query.exec(QString(Data));
//    }


//}

void MainWindow::Laborshow()
{
    Labor *labor=new Labor(this);
    labor->show();

}

void MainWindow::on_fanancial_clicked()
{
    fanancial *fan=new fanancial(this);
    fan->show();
}
