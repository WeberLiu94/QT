/********************************************************************************
** Form generated from reading UI file 'storage.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGE_H
#define UI_STORAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Storage
{
public:
    QPushButton *return_main;

    void setupUi(QDialog *Storage)
    {
        if (Storage->objectName().isEmpty())
            Storage->setObjectName(QStringLiteral("Storage"));
        Storage->resize(676, 480);
        return_main = new QPushButton(Storage);
        return_main->setObjectName(QStringLiteral("return_main"));
        return_main->setGeometry(QRect(560, 440, 75, 23));

        retranslateUi(Storage);

        QMetaObject::connectSlotsByName(Storage);
    } // setupUi

    void retranslateUi(QDialog *Storage)
    {
        Storage->setWindowTitle(QApplication::translate("Storage", "Dialog", 0));
        return_main->setText(QApplication::translate("Storage", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Storage: public Ui_Storage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGE_H
