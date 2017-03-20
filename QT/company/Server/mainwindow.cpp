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
#include "kaoqing.h"


MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::MainWindow)
{

   ui->setupUi(this);
   //
   setFixedSize(880,450);

    QSqlQuery query;
    ui->background->setPixmap(QPixmap("image_s/background.png"));
   connect(ui->Labor,SIGNAL(clicked()),this,SLOT(Laborshow()));
}






MainWindow::~MainWindow()
{
   delete ui;
}

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



void MainWindow::on_kaoqin_clicked()
{
    kaoqing * kaoqin=new kaoqing(this);
    kaoqin->show();
}

void MainWindow::on_buy_goods_clicked()
{
    Buy  *buy=new Buy(this);
    buy->show();
}
