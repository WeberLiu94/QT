#include "fanancial.h"
#include "ui_fanancial.h"
#include <vector>
QString salary_now[100];
QString extra_s_now[100];
int flag;
using namespace std;
fanancial::fanancial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fanancial)
{
    ui->setupUi(this);
    model=new QSqlTableModel(this);
     model->setEditStrategy(QSqlTableModel::OnManualSubmit);


    model->setTable("Wage");
    model->select();
    //model->removeColumn()
    ui->tableView_wage->setModel(model);




}

fanancial::~fanancial()
{
    delete ui;
}

void fanancial::on_return_main_clicked()
{
    close();
}

void fanancial::on_save_clicked()
{
    flag=1;
    model->database().transaction();
    if(model->submitAll())
    {
        model->database().commit();//提交
    }
    else
    {
        model->database().rollback();//回滚
        QMessageBox::warning(this,tr("tableModel"),tr("database error:%1").arg(model->lastError().text()));
    }
}

void fanancial::on_get_names_clicked()
{

    QSqlQuery query;

    QVector<QString> name;
    QVector<QString> job;
    QVector<QString> age;

    int i;
    int j=1;

QString Data="insert into Wage values(";
    query.exec("select * from leader");
    while(query.next())
    {
     name.append(query.value(1).toString());
     job.append(query.value(3).toString());
    age.append(query.value(2).toString());
    }
    query.exec("select * from Sales");
    while(query.next())
    {
     age.append(query.value(2).toString());
     name.append(query.value(1).toString());
     job.append(query.value(3).toString());
    }
    query.exec("select * from Research");
    while(query.next())
    {
      age.append(query.value(2).toString());
     name.append(query.value(1).toString());
     job.append(query.value(3).toString());

    }
    query.exec("select * from Wage");

    while(j>0)
    {
        j=model->rowCount();
        model->removeRow(--j);
        model->submitAll();

    }

   for(i=0;i<name.size();i++)
    {


        QString Data3="";
        QString s=QString::number(i+1, 10);
        Data3=Data+s+","+"'"+name.at(i)+"'"+","+age.at(i)+","+"'"+job.at(i)+"'"+","+"'"+salary_now[i]+"'"+","+"'"+extra_s_now[i]+"'"+")";
        qDebug()<<Data3;
        query.exec(QString(Data3));
    }

model->select();
ui->tableView_wage->setModel(model);
}

void fanancial::add_salary()   //增加工资表中的新员工
{
    int j,k,length1=0;
    QSqlQuery query;

    query.exec("select * from Wage");
    if(flag==1)  //只有数据库中的工资表更新了，才取出最新的数据
    {
    while(query.next())
    {
    salary_now[j]=query.value(4).toString();
    extra_s_now[j]=query.value(5).toString();
    j++;
    }
    flag=0;
    }
    qDebug()<<"修改之前";
    for(k=0;salary_now[k]!='\0';k++)
        qDebug()<<salary_now[k];
    for(k=0;salary_now[k]!='\0';k++)
        length1++;
    qDebug()<<"工资表长度"<<length1;
    for(k=length1-1;k>=Add_id;k--)
    {
            salary_now[k+1]=salary_now[k];
            extra_s_now[k+1]=extra_s_now[k];
    }
    qDebug()<<"修改之后";
    salary_now[Add_id]="123";
    extra_s_now[Add_id]="123";
    for(k=0;salary_now[k]!='\0';k++)
        qDebug()<<salary_now[k];

 }
void fanancial::remove_salary()    //从工资表中删除已经辞退的员工
{
    int j,k,length1=0;
    QSqlQuery query;

    query.exec("select * from Wage");
    if(flag==1)  //只有数据库中的工资表更新了，才取出最新的数据
    {
    while(query.next())
    {
    salary_now[j]=query.value(4).toString();
    extra_s_now[j]=query.value(5).toString();
    j++;
    }
    flag=0;
    }

     for(k=0;salary_now[k]!='\0';k++)
         length1++;




    for(k=Dele_id;k<=length1;k++)
    {
            salary_now[k]=salary_now[k+1];
            extra_s_now[k]=extra_s_now[k+1];
    }


}
