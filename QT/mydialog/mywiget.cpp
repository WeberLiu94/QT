#include "mywiget.h"
#include "ui_mywiget.h"
#include<Qdialog>
#include "mydialog.h"
MyWiget::MyWiget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWiget)
{
    ui->setupUi(this);
    //QDialog dialog(this);
    //dialog.show();
    //dialog.exec();//模态对话框
   // connect(ui->showChildButton,SIGNAL(clicked()),
            //this,SLOT(showChildDialog()));
}

MyWiget::~MyWiget()
{
    delete ui;
}





void MyWiget::on_showChildButton_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}

void MyWiget::on_pushButton_clicked()
{
    close();
   MyDialog dlg;
    if(dlg.exec()==QDialog::Accepted)
        show();

}
