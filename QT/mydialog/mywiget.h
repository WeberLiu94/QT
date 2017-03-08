#ifndef MYWIGET_H
#define MYWIGET_H

#include <QWidget>

namespace Ui {
class MyWiget;
}

class MyWiget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWiget(QWidget *parent = 0);
    ~MyWiget();

private:
    Ui::MyWiget *ui;


private slots:
    void on_showChildButton_clicked();
    void on_pushButton_clicked();
};



#endif // MYWIGET_H
