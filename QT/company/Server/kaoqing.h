#ifndef KAOQING_H
#define KAOQING_H


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
#include<QFileDialog>
#include"qexcel.h"
#include"excelengine.h"

namespace Ui {
class kaoqing;
}

class kaoqing : public QWidget
{
    Q_OBJECT

public:
    explicit kaoqing(QWidget *parent = 0);
    ~kaoqing();

private slots:
    void on_return_main_clicked();

    void on_save_clicked();

private:
    Ui::kaoqing *ui;
    QSqlTableModel *model,*mode2,*mode3;
};

#endif // KAOQING_H
