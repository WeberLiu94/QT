/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_up
{
public:
    QTableWidget *tableWidget;
    QPushButton *sign_up;
    QPushButton *get_name;

    void setupUi(QDialog *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName(QStringLiteral("Sign_up"));
        Sign_up->resize(640, 480);
        tableWidget = new QTableWidget(Sign_up);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 30, 471, 421));
        sign_up = new QPushButton(Sign_up);
        sign_up->setObjectName(QStringLiteral("sign_up"));
        sign_up->setGeometry(QRect(520, 80, 75, 23));
        get_name = new QPushButton(Sign_up);
        get_name->setObjectName(QStringLiteral("get_name"));
        get_name->setGeometry(QRect(520, 40, 75, 23));

        retranslateUi(Sign_up);

        QMetaObject::connectSlotsByName(Sign_up);
    } // setupUi

    void retranslateUi(QDialog *Sign_up)
    {
        Sign_up->setWindowTitle(QApplication::translate("Sign_up", "Dialog", 0));
        sign_up->setText(QApplication::translate("Sign_up", "\347\255\276\345\210\260", 0));
        get_name->setText(QApplication::translate("Sign_up", "\346\233\264\346\226\260\345\220\215\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
