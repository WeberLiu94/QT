#ifndef FANANCIAL_H
#define FANANCIAL_H

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
#include"labor.h"

namespace Ui {
class fanancial;
}

class fanancial : public QWidget
{
    Q_OBJECT

public:
    explicit fanancial(QWidget *parent = 0);
    void add_salary();
    void remove_salary();

    ~fanancial();

private slots:
    void on_return_main_clicked();

    void on_save_clicked();

    void on_get_names_clicked();



private:
    Ui::fanancial *ui;
     QSqlTableModel *model;
};
extern int Dele_id;
extern int Add_id;


#endif // FANANCIAL_H
