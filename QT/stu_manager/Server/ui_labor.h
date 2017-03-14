/********************************************************************************
** Form generated from reading UI file 'labor.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABOR_H
#define UI_LABOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Labor
{
public:
    QTabWidget *tabWidget;
    QWidget *Leaders;
    QTableView *tableView_leader;
    QWidget *SalesMen;
    QTableView *tableView_sale;
    QWidget *reserach_man;
    QTableView *tableView_reserch;
    QPushButton *refresh;
    QPushButton *add_person;
    QPushButton *delete_person;
    QPushButton *save;
    QPushButton *search;
    QLineEdit *lineEdit_search;

    void setupUi(QWidget *Labor)
    {
        if (Labor->objectName().isEmpty())
            Labor->setObjectName(QStringLiteral("Labor"));
        Labor->resize(902, 460);
        tabWidget = new QTabWidget(Labor);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(26, 29, 721, 381));
        Leaders = new QWidget();
        Leaders->setObjectName(QStringLiteral("Leaders"));
        tableView_leader = new QTableView(Leaders);
        tableView_leader->setObjectName(QStringLiteral("tableView_leader"));
        tableView_leader->setGeometry(QRect(0, 0, 711, 361));
        tabWidget->addTab(Leaders, QString());
        SalesMen = new QWidget();
        SalesMen->setObjectName(QStringLiteral("SalesMen"));
        tableView_sale = new QTableView(SalesMen);
        tableView_sale->setObjectName(QStringLiteral("tableView_sale"));
        tableView_sale->setGeometry(QRect(0, 0, 711, 351));
        tableView_sale->setMinimumSize(QSize(300, 300));
        tabWidget->addTab(SalesMen, QString());
        reserach_man = new QWidget();
        reserach_man->setObjectName(QStringLiteral("reserach_man"));
        tableView_reserch = new QTableView(reserach_man);
        tableView_reserch->setObjectName(QStringLiteral("tableView_reserch"));
        tableView_reserch->setGeometry(QRect(0, 0, 821, 361));
        tabWidget->addTab(reserach_man, QString());
        refresh = new QPushButton(Labor);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(760, 50, 75, 23));
        add_person = new QPushButton(Labor);
        add_person->setObjectName(QStringLiteral("add_person"));
        add_person->setGeometry(QRect(760, 90, 75, 23));
        delete_person = new QPushButton(Labor);
        delete_person->setObjectName(QStringLiteral("delete_person"));
        delete_person->setGeometry(QRect(760, 130, 75, 23));
        save = new QPushButton(Labor);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(760, 170, 75, 23));
        search = new QPushButton(Labor);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(760, 210, 75, 23));
        lineEdit_search = new QLineEdit(Labor);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(760, 240, 113, 20));

        retranslateUi(Labor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Labor);
    } // setupUi

    void retranslateUi(QWidget *Labor)
    {
        Labor->setWindowTitle(QApplication::translate("Labor", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(Leaders), QApplication::translate("Labor", "\345\206\263\347\255\226\344\272\272\345\221\230", 0));
        tabWidget->setTabText(tabWidget->indexOf(SalesMen), QApplication::translate("Labor", "\351\224\200\345\224\256\344\272\272\345\221\230", 0));
        tabWidget->setTabText(tabWidget->indexOf(reserach_man), QApplication::translate("Labor", "\347\240\224\345\217\221\344\272\272\345\221\230", 0));
        refresh->setText(QApplication::translate("Labor", "\346\233\264\346\226\260\346\225\260\346\215\256", 0));
        add_person->setText(QApplication::translate("Labor", "\345\242\236\345\212\240\344\272\272\345\221\230", 0));
        delete_person->setText(QApplication::translate("Labor", "\345\210\240\351\231\244\344\272\272\345\221\230", 0));
        save->setText(QApplication::translate("Labor", "\344\277\235\345\255\230\344\277\256\346\224\271", 0));
        search->setText(QApplication::translate("Labor", "\346\237\245\346\211\276", 0));
    } // retranslateUi

};

namespace Ui {
    class Labor: public Ui_Labor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABOR_H
