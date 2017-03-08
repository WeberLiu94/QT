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


    query.exec(QString("create table Student('序号' int primary key,"
                       "'姓名' varchar(50),'年龄' int ,'上课状况' int)"));//创建一个学生信息表格




    //插入学生信息
     query.exec(QString("  insert into Student values(1,'孙磊',23,1)"));
     query.exec(QString("  insert into Student values(2,'詹姆斯',23,1)"));
     query.exec(QString("  insert into Student values(3,'乔丹',23,1)"));


    return true;
}

#endif // CONNECTION_H
