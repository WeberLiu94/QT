#ifndef FANANCIAL_H
#define FANANCIAL_H

#include <QWidget>

namespace Ui {
class fanancial;
}

class fanancial : public QWidget
{
    Q_OBJECT

public:
    explicit fanancial(QWidget *parent = 0);
    ~fanancial();

private:
    Ui::fanancial *ui;
};

#endif // FANANCIAL_H
