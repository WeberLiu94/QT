#include "mainwindow.h"
#include <QApplication>
#include"connection.h"
#include<QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createConnection()) return 1;

    MainWindow w;
    w.setWindowTitle(QObject::tr("学生信息管理系统 version1.0"));
    w.show();

    return a.exec();
}
