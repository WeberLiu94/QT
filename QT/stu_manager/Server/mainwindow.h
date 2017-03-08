
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
     void newListen(); //建立TCP监听事件
     void decodeString(QString sqlString,QString splitString);
     QString getSqlElement(QString sqlString,QString splitString,int index);
     void splitRequest(QString);

     QString getSqlString(QString orderString);

     void exeSqlCmd(QString);

protected:
void init();        //初始化函数用于完成一些诸如建立信号与槽之间的联系和变量给初值的初始化工作。
void comment();//备注，用于备注信息
void getSql();

private slots:
   void acceptConnection(); //接受客户端连接
   void displayError(QAbstractSocket::SocketError); //显示错误信息
   void revData(); //接收来自客户端的数据

  // void on_send_clicked();



   void on_but_submit_clicked();

   void on_but_back_clicked();

   void on_but_search_clicked();

   void on_but_choose_clicked();

   void on_but_id_up_clicked();

   void on_but_id_down_clicked();

   void on_but_delete_clicked();

   void on_but_add_clicked();

   void on_tabWidget_currentChanged();

   void on_pushButton_clicked();

   //void on_tabWidget_currentChanged(int index);

private:
   Ui::MainWindow *ui;
   QTcpSocket *tcpSocket=NULL;
   QTcpServer *tcpServer=NULL;
   QSqlTableModel *model,*model_1,*model_2;
};


#endif // MAINWINDOW_H
