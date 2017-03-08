/********************************************************************************
** Form generated from reading UI file 'mywiget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIGET_H
#define UI_MYWIGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWiget
{
public:
    QLabel *label;
    QPushButton *showChildButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *MyWiget)
    {
        if (MyWiget->objectName().isEmpty())
            MyWiget->setObjectName(QStringLiteral("MyWiget"));
        MyWiget->resize(400, 300);
        label = new QLabel(MyWiget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 100, 81, 31));
        showChildButton = new QPushButton(MyWiget);
        showChildButton->setObjectName(QStringLiteral("showChildButton"));
        showChildButton->setGeometry(QRect(20, 180, 75, 23));
        pushButton = new QPushButton(MyWiget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 230, 75, 23));
        pushButton_2 = new QPushButton(MyWiget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 260, 75, 23));

        retranslateUi(MyWiget);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MyWiget, SLOT(close()));

        QMetaObject::connectSlotsByName(MyWiget);
    } // setupUi

    void retranslateUi(QWidget *MyWiget)
    {
        MyWiget->setWindowTitle(QApplication::translate("MyWiget", "MyWiget", 0));
        label->setText(QApplication::translate("MyWiget", "\346\210\221\346\230\257\344\270\273\347\225\214\351\235\242", 0));
        showChildButton->setText(QApplication::translate("MyWiget", "\346\230\276\347\244\272\345\255\220\347\252\227\345\217\243", 0));
        pushButton->setText(QApplication::translate("MyWiget", "\351\207\215\346\226\260\347\231\273\345\275\225", 0));
        pushButton_2->setText(QApplication::translate("MyWiget", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWiget: public Ui_MyWiget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIGET_H
