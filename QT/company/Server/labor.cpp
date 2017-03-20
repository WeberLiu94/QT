#include "labor.h"
#include "ui_labor.h"
int Dele_id;
int Add_id;

Labor::Labor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Labor)
{
    ui->setupUi(this);

    model=new QSqlTableModel(this);
    mode2=new QSqlTableModel(this);
    mode3=new QSqlTableModel(this);



    model->setTable("Leader");
    model->select();
    model->removeColumn(5);
    mode2->setTable("Sales");
    mode2->removeColumn(5);
    mode2->select();
    mode3->setTable("Research");
    mode3->removeColumn(5);
    mode3->select();


    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    mode2->setEditStrategy(QSqlTableModel::OnManualSubmit);
    mode3->setEditStrategy(QSqlTableModel::OnManualSubmit);


    ui->tableView_leader->setModel(model);
    ui->tableView_sale->setModel(mode2);
    ui->tableView_reserch->setModel(mode3);
}

Labor::~Labor()
{
    delete ui;
}





//void MainWindow::on_but_back_clicked()//撤销修改按钮
//{
//    if(ui->tabWidget->currentIndex()==0)
//    {
//          model->revertAll();
//    }

//}




void Labor::on_refresh_clicked()
{
    if(ui->tabWidget->currentIndex()==0)
    {
        model->setTable("Leader");
        model->select();
    }
    if(ui->tabWidget->currentIndex()==1)
    {
        mode2->setTable("Sales");
        mode2->select();
    }
    if(ui->tabWidget->currentIndex()==2)
    {
        mode3->setTable("Research");
        mode3->select();
    }
}

void Labor::on_search_clicked()
{
    int id=0;
    QString Name;
    id=ui->lineEdit_search->text().toInt();

    Name=ui->lineEdit_search->text();

   // QString name=ui->lineEdit_search->text();
    //根据姓名进行筛选
   if(ui->tabWidget->currentIndex()==0)
   {
       if(id!=0)
       {
         model->setFilter(QString(" 序号='%1'").arg(id));
         model->select();
       }
       else
       {
        model->setFilter(QString(" 姓名='%1'").arg(Name));
        model->select();
       }
   }
   if(ui->tabWidget->currentIndex()==1)
   {
       if(id!=0)
       {
         mode2->setFilter(QString(" 序号='%1'").arg(id));
         mode2->select();
       }
       else
       {
        mode2->setFilter(QString(" 姓名='%1'").arg(Name));
        mode2->select();
       }
   }
   if(ui->tabWidget->currentIndex()==2)
   {
       if(id!=0)
       {
         mode3->setFilter(QString(" 序号='%1'").arg(id));
         mode3->select();
       }
       else
       {
        mode3->setFilter(QString(" 姓名='%1'").arg(Name));
        mode3->select();
       }
   }
}

void Labor::on_save_clicked()
{     if(ui->tabWidget->currentIndex()==0)
    {
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
    if(ui->tabWidget->currentIndex()==1)
       {
           mode2->database().transaction();
           if(mode2->submitAll())
           {
               mode2->database().commit();//提交
           }
           else
           {
               mode2->database().rollback();//回滚
               QMessageBox::warning(this,tr("tableModel"),tr("database error:%1").arg(model->lastError().text()));
           }
       }
    if(ui->tabWidget->currentIndex()==2)
       {
           mode2->database().transaction();
           if(mode3->submitAll())
           {
               mode3->database().commit();//提交
           }
           else
           {
               mode3->database().rollback();//回滚
               QMessageBox::warning(this,tr("tableModel"),tr("database error:%1").arg(model->lastError().text()));
           }
       }

}

void Labor::on_add_person_clicked()
{
    int num1,num2;
    fanancial fan;
    if(ui->tabWidget->currentIndex()==0)
    {
        //获取表中的行数
        int rowNum=model->rowCount();
        int id=0;
        Add_id=rowNum;
        qDebug()<<"增加位置"<<Add_id;
        fan.add_salary();
        //添加一行
        model->insertRow(rowNum);

        model->setData(model->index(rowNum,0),id);
       //提交到数据库
        model->submitAll(); //在工资表中增加新员工
        model->database().commit();

    }
    if(ui->tabWidget->currentIndex()==1)
    {

        int rowNum=mode2->rowCount();
        int id=0;
        num1=model->rowCount();
        Add_id=num1+rowNum;
        qDebug()<<"增加位置"<<Add_id;
        fan.add_salary(); //在工资表中增加新员工
        mode2->insertRow(rowNum);
        mode2->setData(mode2->index(rowNum,0),id);
        mode2->submitAll();



    }
    if(ui->tabWidget->currentIndex()==2)
    {
        int rowNum=mode3->rowCount();
        int id=0;
        mode3->insertRow(rowNum);
        mode3->setData(mode3->index(rowNum,0),id);
        mode3->submitAll();


    }

}

void Labor::on_delete_person_clicked()
{
     int num,num2;
     fanancial fan;

    if(ui->tabWidget->currentIndex()==0)
    {
        //获取选中的行
        int curRow=ui->tableView_leader->currentIndex().row();

        //删除改行
        model->removeRow(curRow);

        qDebug()<< "hello";
        int ok=QMessageBox::warning(this,tr("删除当前行！"),tr("你确定删除当前行吗？"),
                                    QMessageBox::Yes,QMessageBox::No);
        if(ok==QMessageBox::No)
        {
            //如果不删除，则撤销
            model->revertAll();
        }
        else
        {
            //否则提交，在数据库中删除该行
            model->submitAll();
            Dele_id=curRow;
            qDebug()<< Dele_id;
            fan.remove_salary(); //删除工资表中的当前项

        }


    }
    if(ui->tabWidget->currentIndex()==1)
    {
        //获取选中的行
        int curRow=ui->tableView_sale->currentIndex().row();
        num=model->rowCount();

        //删除改行
        mode2->removeRow(curRow);
        int ok=QMessageBox::warning(this,tr("删除当前行！"),tr("你确定删除当前行吗？"),
                                    QMessageBox::Yes,QMessageBox::No);
        if(ok==QMessageBox::No)
        {
            //如果不删除，则撤销
            mode2->revertAll();
        }
        else
        {
            //否则提交，在数据库中删除该行
            mode2->submitAll();
            Dele_id=curRow+num;
            qDebug()<< Dele_id;
            fan.remove_salary(); //删除工资表中的当前项
        }
    }
    if(ui->tabWidget->currentIndex()==2)
    {
        //获取选中的行
        int curRow=ui->tableView_reserch->currentIndex().row();
        num=model->rowCount();
        num2=mode2->rowCount();
        //删除改行
        mode3->removeRow(curRow);
        int ok=QMessageBox::warning(this,tr("删除当前行！"),tr("你确定删除当前行吗？"),
                                    QMessageBox::Yes,QMessageBox::No);
        if(ok==QMessageBox::No)
        {
            //如果不删除，则撤销
            mode3->revertAll();
        }
        else
        {
            //否则提交，在数据库中删除该行
            mode3->submitAll();
            Dele_id=curRow+num+num2;
            qDebug()<< Dele_id;
             fan.remove_salary(); //删除工资表中的当前项
        }
    }

}








void Labor::on_return_2_clicked()
{
       close();
    // MainWindow *w=new MainWindow(this);
    // w->show();
}

void Labor::on_import_exc_clicked()
{
//        QString FileName=QFileDialog::getOpenFileName(this,tr("选择文件"),"F:",tr("文档(* xlsx)"));
//        qDebug()<<"FileName"<<FileName;
//         ExcelEngine exc;
//         QSqlDatabase db;
//         QSqlQuery query(db);
//        int hang;
//        exc.Open(FileName);

//        hang=exc.GetRowCount();
//        for(int i=2;i<=hang;i++)
//        {
//                QString Data="insert into Student values(";
//                QString id=exc.GetCellData(i,1).toString();
//                QString name=exc.GetCellData(i,2).toString();
//                QString age=exc.GetCellData(i,3).toString();
//                QString situation=exc.GetCellData(i,4).toString();
//                Data=Data+id+","+"'"+name+"'"+","+age+","+situation+")";
//                qDebug()<<Data;
//                QSqlQuery query(db);
//                query.exec(QString(Data));
//        }

}
