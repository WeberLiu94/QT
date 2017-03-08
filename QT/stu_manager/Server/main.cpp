#include "mainwindow.h"
#include <QApplication>
#include<QTextCodec>
#include"logindialog.h"
#include"connection.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createConnection()) return 1;
    MainWindow w;

    w.setWindowTitle(QObject::tr("学生信息管理系统 version1.0"));
    LoginDialog dlg;
   if(dlg.exec()==QDialog::Accepted)
   {
        w.show();

        return a.exec();
   }
    else
    return 0;
}
