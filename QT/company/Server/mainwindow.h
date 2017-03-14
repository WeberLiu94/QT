
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtNetwork>
#include<QtNetwork/QTcpSocket>
#include<QtNetwork/QTcpServer>
#include <QTimer>
#include<QSqlTableModel>
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

private:
   Ui::MainWindow *ui;


};


#endif // MAINWINDOW_H
