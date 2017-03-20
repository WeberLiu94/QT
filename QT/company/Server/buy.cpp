#include "buy.h"
#include "ui_buy.h"
#include<QDateTime>
int goods_price;
int goods_num;
int goods_total;
QVector<QString> goods;
Buy::Buy(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Buy)
{
    ui->setupUi(this);
}

Buy::~Buy()
{
    delete ui;
}

void Buy::on_return_main_clicked()
{
    close();
}

void Buy::on_goods_num_valueChanged(int num)
{
  QString goods_price_s=ui->goods_price->text();
  goods_price=goods_price_s.toInt();
  goods_num=num;
  goods_total=goods_price*goods_num;
  QString goods_total_s=QString::number(goods_total,10)+"元";
  ui->goods_total->setText(goods_total_s);
}

void Buy::on_import_2_clicked()
{
    QString company=ui->goods_company->text();
    QString name=ui->goods_name->text();
    QString time=QDateTime::currentDateTime().toString("yyyy-MM-dd  hh:mm:ss");
    QString price=QString::number(goods_price,10);
    QString num=QString::number(goods_num,10);
    QString total=QString::number(goods_total,10);
    QString display="采购公司："+company+"\n"+"商品名称："+name+"\n"+"数量："+num+" 单价:"+price+" 总价:"+total+"\n"+"时间 "+time+"\n";
    goods.append(display);
    ui->goods->append(display);
    //ui->goods->size()

}

void Buy::on_history_clicked()
{
    int i;
    ui->goods->append("*****************采购记录**************************");
    for(i=0;i<goods.size();i++)
    {


        ui->goods->append(goods.at(i));

    }
    ui->goods->append("*****************分割线**************************");
}
