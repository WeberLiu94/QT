#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QColorDialog>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
//    QColor color=QColorDialog::getColor(Qt::red,this,
//    tr("颜色对话框"));
//    qDebug()<<"Color:"<<color;
    QColorDialog color_dig(Qt::red,this);

    color_dig.exec();
    QColor color=color_dig.currentColor();
    qDebug()<<"Color:"<<color;

}
