/********************************************************************************
** Form generated from reading UI file 'fanancial.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANANCIAL_H
#define UI_FANANCIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fanancial
{
public:
    QTableView *tableView_wage;
    QPushButton *return_main;
    QPushButton *save;
    QPushButton *get_names;

    void setupUi(QWidget *fanancial)
    {
        if (fanancial->objectName().isEmpty())
            fanancial->setObjectName(QStringLiteral("fanancial"));
        fanancial->resize(844, 451);
        fanancial->setStyleSheet(QStringLiteral(""));
        tableView_wage = new QTableView(fanancial);
        tableView_wage->setObjectName(QStringLiteral("tableView_wage"));
        tableView_wage->setGeometry(QRect(20, 10, 641, 391));
        return_main = new QPushButton(fanancial);
        return_main->setObjectName(QStringLiteral("return_main"));
        return_main->setGeometry(QRect(670, 70, 75, 23));
        save = new QPushButton(fanancial);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(670, 40, 75, 23));
        get_names = new QPushButton(fanancial);
        get_names->setObjectName(QStringLiteral("get_names"));
        get_names->setGeometry(QRect(670, 10, 75, 23));

        retranslateUi(fanancial);

        QMetaObject::connectSlotsByName(fanancial);
    } // setupUi

    void retranslateUi(QWidget *fanancial)
    {
        fanancial->setWindowTitle(QApplication::translate("fanancial", "Form", 0));
        return_main->setText(QApplication::translate("fanancial", "\350\277\224\345\233\236", 0));
        save->setText(QApplication::translate("fanancial", "\344\277\235\345\255\230\344\277\256\346\224\271", 0));
        get_names->setText(QApplication::translate("fanancial", "\346\233\264\346\226\260\345\220\215\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class fanancial: public Ui_fanancial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANANCIAL_H
