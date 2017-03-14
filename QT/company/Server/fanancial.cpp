#include "fanancial.h"
#include "ui_fanancial.h"

fanancial::fanancial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fanancial)
{
    ui->setupUi(this);
}

fanancial::~fanancial()
{
    delete ui;
}
