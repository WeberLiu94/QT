#ifndef BUY_H
#define BUY_H

#include <QWidget>
#include <QWidget>
#include <QMainWindow>

#include<QSqlTableModel>
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

namespace Ui {
class Buy;
}

class Buy : public QWidget
{
    Q_OBJECT

public:
    explicit Buy(QWidget *parent = 0);
    ~Buy();

private slots:
    void on_return_main_clicked();
    //void caculate_tatal();

    void on_goods_num_valueChanged(int arg1);

    void on_import_2_clicked();

    void on_history_clicked();

private:
    Ui::Buy *ui;
};

#endif // BUY_H
