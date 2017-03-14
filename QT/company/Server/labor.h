#ifndef LABOR_H
#define LABOR_H

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
class Labor;
}

class Labor : public QWidget
{
    Q_OBJECT

public:
    explicit Labor(QWidget *parent = 0);
    ~Labor();

private slots:
    void on_refresh_clicked();


    void on_search_clicked();

    void on_save_clicked();

    void on_add_person_clicked();

    void on_delete_person_clicked();





    void on_return_2_clicked();

private:
    Ui::Labor *ui;
    QSqlTableModel *model,*mode2,*mode3;
};

#endif // LABOR_H
