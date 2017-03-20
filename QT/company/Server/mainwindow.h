
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtNetwork>
#include<QtNetwork/QTcpSocket>
#include<QtNetwork/QTcpServer>
#include <QTimer>
#include<QSqlTableModel>
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
#include"connection.h"
#include"fanancial.h"
#include"buy.h"



namespace Ui {
   class MainWindow;
}

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = 0);
   ~MainWindow();








private slots:
    void Laborshow();

    void on_fanancial_clicked();



    void on_kaoqin_clicked();

    void on_buy_goods_clicked();

private:
   Ui::MainWindow *ui;


};


#endif // MAINWINDOW_H
