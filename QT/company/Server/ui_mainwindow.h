/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *background;
    QLabel *label;
    QPushButton *Labor;
    QPushButton *fanancial;
    QPushButton *store;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(874, 505);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, -30, 871, 521));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 20, 331, 81));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        Labor = new QPushButton(centralWidget);
        Labor->setObjectName(QStringLiteral("Labor"));
        Labor->setGeometry(QRect(350, 130, 161, 41));
        fanancial = new QPushButton(centralWidget);
        fanancial->setObjectName(QStringLiteral("fanancial"));
        fanancial->setGeometry(QRect(350, 230, 161, 41));
        store = new QPushButton(centralWidget);
        store->setObjectName(QStringLiteral("store"));
        store->setGeometry(QRect(350, 320, 161, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 874, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        background->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\344\274\201\344\270\232\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        Labor->setText(QApplication::translate("MainWindow", "\344\272\272\344\272\213\347\256\241\347\220\206", 0));
        fanancial->setText(QApplication::translate("MainWindow", "\350\264\242\345\212\241\347\256\241\347\220\206", 0));
        store->setText(QApplication::translate("MainWindow", "\345\272\223\345\255\230\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
