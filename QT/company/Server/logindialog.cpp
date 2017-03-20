#include "logindialog.h"
#include "ui_logindialog.h"
#include<QMessageBox>
#include<QtSql/QSqlQuery>
#include<QDateTime>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->label_4->setText(QDateTime::
    currentDateTime().toString("yyyy-MM-dd  hh:mm:ss"));
    setFixedSize(400,300);
    setWindowTitle(QObject::tr("Log in"));
    ui->pwdLineEdit->setFocus();
    ui->loginBtn->setDefault(true);
    timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(chTime()));
        timer->start(1000);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if(ui->pwdLineEdit->text().isEmpty())
    {
        QMessageBox::information(this,tr("请输入密码"),tr("请先输入密码再登陆"),QMessageBox::Ok);
        ui->pwdLineEdit->setFocus();
    }
    else
    {

        if("1"==ui->pwdLineEdit->text())
        {
            QDialog::accept();
        }
        else
        {
            QMessageBox::warning(this,tr("密码错误"),tr("请输入正确的密码再登陆！"),QMessageBox::Ok);
            ui->pwdLineEdit->clear();
            ui->pwdLineEdit->setFocus();
        }

    }
}

void LoginDialog::on_quitBtn_clicked()
{
    QDialog::reject();
}

void LoginDialog::chTime()
{
    ui->label_4->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd  hh:mm:ss"));
}
void LoginDialog::timerEvent(QTimerEvent *)
{
           chTime();
}

