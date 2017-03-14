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
#include <QtWidgets/QColumnView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fanancial
{
public:
    QColumnView *columnView;

    void setupUi(QWidget *fanancial)
    {
        if (fanancial->objectName().isEmpty())
            fanancial->setObjectName(QStringLiteral("fanancial"));
        fanancial->resize(640, 480);
        columnView = new QColumnView(fanancial);
        columnView->setObjectName(QStringLiteral("columnView"));
        columnView->setGeometry(QRect(100, 80, 256, 192));

        retranslateUi(fanancial);

        QMetaObject::connectSlotsByName(fanancial);
    } // setupUi

    void retranslateUi(QWidget *fanancial)
    {
        fanancial->setWindowTitle(QApplication::translate("fanancial", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class fanancial: public Ui_fanancial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANANCIAL_H
