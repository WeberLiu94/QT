#include "mywiget.h"
#include "ui_mywiget.h"
#include<Qdialog>
MyWiget::MyWiget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWiget)
{
    ui->setupUi(this);
    //QDialog dialog(this);
    //dialog.show();
    //dialog.exec();//模态对话框
    connect(ui->showChildButton,SIGNAL(clicked()),
            this,SLOT(showChildDialog()));
}

MyWiget::~MyWiget()
{
    delete ui;
}

void MyWiget::showChildDialog()
{
    QDialog *dialog=new QDialog(this);
    dialog->show();
}


