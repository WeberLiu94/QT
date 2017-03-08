#include "mywiget.h"
#include <QApplication>
#include "mydialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWiget w;
   MyDialog dialog; //新建一个对话框对象
    if(dialog.exec()==QDialog::Accepted){ //判断accept()的返回结果，若按下，再显示主界面
    w.show();

    return a.exec();
    }
    else return 0;
}
