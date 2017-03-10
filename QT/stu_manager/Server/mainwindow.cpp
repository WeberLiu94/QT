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

MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::MainWindow)
{

   ui->setupUi(this);
   //显示数据库内容
   model=new QSqlTableModel(this);
   //model_1=new QSqlTableModel(this);


   model->setTable("Student");
   model->select();


   model->setEditStrategy(QSqlTableModel::OnManualSubmit);


   ui->tableView_food->setModel(model);

   comment();
    ui->background->setPixmap(QPixmap("image_s/background.png"));
    //init();
}
void MainWindow::comment()
{
    if(ui->tabWidget->currentIndex()==0)
    {
          ui->label_comment->setText("1 代表正常，0表示不正常");
    }

}
void MainWindow::init()
{
}

void MainWindow::newListen()
{

}

void MainWindow::acceptConnection()
{

}

void MainWindow::displayError(QAbstractSocket::SocketError)
{

}

MainWindow::~MainWindow()
{
   delete ui;
}
void MainWindow::revData()//接收字符串数据。
{

}

void MainWindow::on_but_submit_clicked()//提交修改按钮
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

}

void MainWindow::on_but_back_clicked()//撤销修改按钮
{
    if(ui->tabWidget->currentIndex()==0)
    {
          model->revertAll();
    }

}

void MainWindow::on_but_search_clicked()//查询按钮
{
    int id=0;
    QString Name;
    id=ui->lineEdit_search->text().toInt();
    Name=ui->lineEdit_search->text();

   // QString name=ui->lineEdit_search->text();
    //根据姓名进行筛选
   if(ui->tabWidget->currentIndex()==0)
   {
       if(id!=0)
       {
         model->setFilter(QString(" 序号='%1'").arg(id));
         model->select();
       }
       else
       {
        model->setFilter(QString(" 姓名='%1'").arg(Name));
        model->select();
       }
   }

}

void MainWindow::on_but_choose_clicked()//显示全表按钮
{
    if(ui->tabWidget->currentIndex()==0)
    {
        model->setTable("Student");
        model->select();
    }

}

void MainWindow::on_but_id_up_clicked()//id升序排列按钮
{
    //ID字段，即低0个字段，升序排列
    if(ui->tabWidget->currentIndex()==0)
    {
        model->setSort(0,Qt::AscendingOrder);
        model->select();
    }

}

void MainWindow::on_but_id_down_clicked()//id降序排列按钮
{
    if(ui->tabWidget->currentIndex()==0)
    {
        model->setSort(0,Qt::DescendingOrder);
        model->select();
    }

}

void MainWindow::on_but_delete_clicked()//删除选中行按钮
{
    if(ui->tabWidget->currentIndex()==0)
    {
        //获取选中的行
        int curRow=ui->tableView_food->currentIndex().row();
        //删除改行
        model->removeRow(curRow);
        int ok=QMessageBox::warning(this,tr("删除当前行！"),tr("你确定删除当前行吗？"),
                                    QMessageBox::Yes,QMessageBox::No);
        if(ok==QMessageBox::No)
        {
            //如果不删除，则撤销
            model->revertAll();
        }
        else
        {
            //否则提交，在数据库中删除该行
            model->submitAll();
        }
    }


}

void MainWindow::on_but_add_clicked()//添加记录按钮
{
     if(ui->tabWidget->currentIndex()==0)
     {
         //获取表中的行数
         int rowNum=model->rowCount();
         int id=0;
         //添加一行
         model->insertRow(rowNum);
         model->setData(model->index(rowNum,0),id);
        //提交到数据库
         model->submitAll();
     }
     if(ui->tabWidget->currentIndex()==1)
     {
         int rowNum=model_1->rowCount();
         int id=0;
         model_1->insertRow(rowNum);
         model_1->setData(model_1->index(rowNum,0),id);
         model_1->submitAll();
     }
     if(ui->tabWidget->currentIndex()==2)
     {
         int rowNum=model_2->rowCount();
         int id=0;
         model_2->insertRow(rowNum);
         model_2->setData(model_2->index(rowNum,0),id);
         model_2->submitAll();
     }
}
void MainWindow::on_tabWidget_currentChanged()
{
   if(ui->tabWidget->currentIndex()==0)
   {
         ui->label_comment->setText("1 代表正常，0表示不正常");
   }

}
void MainWindow::getSql()
{
    int id;
    id=ui->lineEdit_search->text().toInt();
    model->setFilter(QString("id='%1'").arg(id));
    model->select();
}

void MainWindow::on_pushButton_clicked()
{
    int num=model->rowCount();
   QSqlQuery query;
    QString text="";
    int columnNum=model->columnCount();
    query.exec("select *from Foods ");//baseinfo是数据库里一张表
    while(query.next())
    {
        text=text+QString::number(num)+"%";
        for(int i=0;i<columnNum;i++)
        {
          text=text+QString::number(columnNum-i)+"*";
          text=text+query.value(i).toString();
        }
        text=text+"0*";
        num--;
    }
    text=text+QString::number(num)+"%";
    //ui->lineEdit->setText(text);

}
void MainWindow::splitRequest(QString requestString)
{
    int requestNumber=requestString.left(requestString.indexOf("#")).toInt();
    QString text="";
    qDebug()<<"requestNumber"<<requestNumber;
    if(requestNumber==1){//get food menue and send to client
        int num=model->rowCount();
       QSqlQuery query;

        int columnNum=model->columnCount();
        query.exec("select *from Foods ");
        while(query.next())
        {
            text=text+QString::number(num)+"%";
            for(int i=0;i<columnNum;i++)
            {
              text=text+QString::number(columnNum-i)+"*";
              text=text+query.value(i).toString();
            }
            text=text+"0*";
            num--;
        }
        text=text+QString::number(num)+"%";
        text="1#"+text;
        this->tcpSocket->write(text.toUtf8());
    }
    else if(requestNumber==2){//get order from client
        QString orderString = requestString.mid(2);

        exeSqlCmd(getSqlString(orderString));
    }
    else if(requestNumber==3)
    {
        qDebug()<<"requestNumber"<<requestNumber;
          qDebug()<<"start";
    }
    else{//unknown request
        text="unkown request";
        this->tcpSocket->write(text.toLatin1());
    }

}
void MainWindow::exeSqlCmd(QString sqlString){

   QSqlQuery query;
   bool b =   query.exec(sqlString);
   qDebug()<<b;
}

QString MainWindow::getSqlString(QString orderString)
{

}


void MainWindow::on_Import_excle_clicked()
{
    QString FileName=QFileDialog::getOpenFileName(this,tr("选择文件"),"F:",tr("文档(* xlsx)"));
   qDebug()<<"FileName"<<FileName;
    ExcelEngine exc;
     QSqlDatabase db;
     QSqlQuery query(db);
    int hang;
    exc.Open(FileName);

    hang=exc.GetRowCount();
    for(int i=2;i<=hang;i++)
    {
            QString Data="insert into Student values(";
            QString id=exc.GetCellData(i,1).toString();
            QString name=exc.GetCellData(i,2).toString();
            QString age=exc.GetCellData(i,3).toString();
            QString situation=exc.GetCellData(i,4).toString();
            Data=Data+id+","+"'"+name+"'"+","+age+","+situation+")";
            qDebug()<<Data;
            QSqlQuery query(db);
            query.exec(QString(Data));
    }


}
