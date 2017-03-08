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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_food;
    QTableView *tableView_food;
    QLabel *label;
    QPushButton *but_choose;
    QLineEdit *lineEdit_search;
    QPushButton *but_search;
    QPushButton *but_delete;
    QPushButton *but_id_down;
    QPushButton *but_submit;
    QPushButton *but_add;
    QPushButton *but_id_up;
    QPushButton *but_back;
    QLabel *background;
    QLabel *label_comment;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1302, 746);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(30, 15, 841, 571));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab_food = new QWidget();
        tab_food->setObjectName(QStringLiteral("tab_food"));
        tableView_food = new QTableView(tab_food);
        tableView_food->setObjectName(QStringLiteral("tableView_food"));
        tableView_food->setGeometry(QRect(5, 11, 841, 531));
        tabWidget->addTab(tab_food, QString());
        tableView_food->raise();
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(510, 600, 321, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        but_choose = new QPushButton(centralWidget);
        but_choose->setObjectName(QStringLiteral("but_choose"));
        but_choose->setGeometry(QRect(890, 50, 261, 51));
        lineEdit_search = new QLineEdit(centralWidget);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(290, 610, 211, 31));
        but_search = new QPushButton(centralWidget);
        but_search->setObjectName(QStringLiteral("but_search"));
        but_search->setGeometry(QRect(40, 600, 221, 41));
        but_delete = new QPushButton(centralWidget);
        but_delete->setObjectName(QStringLiteral("but_delete"));
        but_delete->setGeometry(QRect(890, 370, 261, 41));
        but_id_down = new QPushButton(centralWidget);
        but_id_down->setObjectName(QStringLiteral("but_id_down"));
        but_id_down->setGeometry(QRect(890, 540, 261, 41));
        but_submit = new QPushButton(centralWidget);
        but_submit->setObjectName(QStringLiteral("but_submit"));
        but_submit->setGeometry(QRect(890, 220, 261, 41));
        but_add = new QPushButton(centralWidget);
        but_add->setObjectName(QStringLiteral("but_add"));
        but_add->setGeometry(QRect(890, 140, 261, 51));
        but_id_up = new QPushButton(centralWidget);
        but_id_up->setObjectName(QStringLiteral("but_id_up"));
        but_id_up->setGeometry(QRect(890, 450, 261, 41));
        but_back = new QPushButton(centralWidget);
        but_back->setObjectName(QStringLiteral("but_back"));
        but_back->setGeometry(QRect(890, 300, 261, 41));
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(13, 1, 1271, 701));
        label_comment = new QLabel(centralWidget);
        label_comment->setObjectName(QStringLiteral("label_comment"));
        label_comment->setGeometry(QRect(610, 0, 261, 31));
        MainWindow->setCentralWidget(centralWidget);
        background->raise();
        tabWidget->raise();
        label->raise();
        but_choose->raise();
        lineEdit_search->raise();
        but_search->raise();
        but_delete->raise();
        but_id_down->raise();
        but_submit->raise();
        but_add->raise();
        but_id_up->raise();
        but_back->raise();
        tableView_food->raise();
        label_comment->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1302, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\347\232\204</p><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(tab_food), QApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\350\241\250", 0));
        label->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\346\211\276\347\232\204\345\255\246\347\224\237\345\247\223\345\220\215\346\210\226\350\200\205ID", 0));
        but_choose->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\205\250\350\241\250", 0));
        but_search->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        but_delete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", 0));
        but_id_down->setText(QApplication::translate("MainWindow", "id\351\231\215\345\272\217\346\216\222\345\272\217", 0));
        but_submit->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244\344\277\256\346\224\271", 0));
        but_add->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\260\345\275\225", 0));
        but_id_up->setText(QApplication::translate("MainWindow", "id\345\215\207\345\272\217\346\216\222\345\272\217", 0));
        but_back->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200\344\277\256\346\224\271", 0));
        background->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_comment->setText(QApplication::translate("MainWindow", "\345\244\207\346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
