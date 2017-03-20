/********************************************************************************
** Form generated from reading UI file 'kaoqing.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KAOQING_H
#define UI_KAOQING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kaoqing
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QWidget *tab_2;
    QTableView *tableView_2;
    QWidget *tab_3;
    QTableView *tableView_3;
    QPushButton *return_main;
    QPushButton *save;

    void setupUi(QWidget *kaoqing)
    {
        if (kaoqing->objectName().isEmpty())
            kaoqing->setObjectName(QStringLiteral("kaoqing"));
        kaoqing->resize(827, 480);
        tabWidget = new QTabWidget(kaoqing);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 30, 701, 391));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 691, 361));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, 0, 691, 391));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(0, 0, 691, 391));
        tabWidget->addTab(tab_3, QString());
        return_main = new QPushButton(kaoqing);
        return_main->setObjectName(QStringLiteral("return_main"));
        return_main->setGeometry(QRect(730, 90, 75, 23));
        save = new QPushButton(kaoqing);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(730, 50, 75, 23));

        retranslateUi(kaoqing);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(kaoqing);
    } // setupUi

    void retranslateUi(QWidget *kaoqing)
    {
        kaoqing->setWindowTitle(QApplication::translate("kaoqing", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("kaoqing", "\345\206\263\347\255\226\351\203\250\351\227\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("kaoqing", "\351\224\200\345\224\256\351\203\250\351\227\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("kaoqing", "\347\240\224\345\217\221\351\203\250\351\227\250", 0));
        return_main->setText(QApplication::translate("kaoqing", "\350\277\224\345\233\236", 0));
        save->setText(QApplication::translate("kaoqing", "\344\277\235\345\255\230\347\255\276\345\210\260", 0));
    } // retranslateUi

};

namespace Ui {
    class kaoqing: public Ui_kaoqing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KAOQING_H
