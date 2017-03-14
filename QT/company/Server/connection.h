#ifndef CONNECTION_H
#define CONNECTION_H
#include<QMessageBox>
#include<QSqlDatabase>
#include<QSqlQuery>

static bool createConnection()
{

     QSqlDatabase db;
    if(!QSqlDatabase::contains("qt_sql_default_connection"))
    {
          db=QSqlDatabase::addDatabase("QSQLITE");
    }
    db.setDatabaseName("my.db");
    if(!db.open())
    {

        QMessageBox::critical(0,"Cannot open database","Unable to establish a database connection.",
                             QMessageBox::Cancel);
        return false;
    }
    QSqlQuery query(db);


    query.exec(QString("create table Leader('序号' int primary key,"
                       "'姓名' varchar(50),'年龄' int ,'职务' vchar(50),'联系方式' String)"));//创建领导层表格
    query.exec(QString("create table Sales('序号' int primary key,"
                       "'姓名' varchar(50),'年龄' int ,'职务'vchar(50),'联系方式' String)"));//创建销售人员表格
    query.exec(QString("create table Research('序号' int primary key,"
                       "'姓名' varchar(50),'年龄' int ,'职务' vchar(50),'联系方式' String)"));//创建研发人员表格





    return true;
}

#endif // CONNECTION_H
