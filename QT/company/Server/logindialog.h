#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include<QTimer>
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void on_loginBtn_clicked();

    void on_quitBtn_clicked();

    void chTime();


private:
    Ui::LoginDialog *ui;
    QTimer  *timer=NULL;
protected:
    void timerEvent(QTimerEvent *);

};

#endif // LOGINDIALOG_H
