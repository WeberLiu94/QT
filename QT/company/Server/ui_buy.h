/********************************************************************************
** Form generated from reading UI file 'buy.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_H
#define UI_BUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Buy
{
public:
    QSpinBox *goods_num;
    QPushButton *import_2;
    QPushButton *return_main;
    QTextBrowser *goods_total;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *goods_company;
    QLineEdit *goods_name;
    QLineEdit *goods_price;
    QTextBrowser *goods;
    QPushButton *history;

    void setupUi(QWidget *Buy)
    {
        if (Buy->objectName().isEmpty())
            Buy->setObjectName(QStringLiteral("Buy"));
        Buy->resize(797, 480);
        goods_num = new QSpinBox(Buy);
        goods_num->setObjectName(QStringLiteral("goods_num"));
        goods_num->setGeometry(QRect(600, 140, 121, 22));
        import_2 = new QPushButton(Buy);
        import_2->setObjectName(QStringLiteral("import_2"));
        import_2->setGeometry(QRect(600, 260, 121, 23));
        return_main = new QPushButton(Buy);
        return_main->setObjectName(QStringLiteral("return_main"));
        return_main->setGeometry(QRect(600, 360, 121, 21));
        goods_total = new QTextBrowser(Buy);
        goods_total->setObjectName(QStringLiteral("goods_total"));
        goods_total->setGeometry(QRect(600, 180, 121, 31));
        label = new QLabel(Buy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(740, 30, 54, 21));
        label_2 = new QLabel(Buy);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(740, 70, 54, 21));
        label_3 = new QLabel(Buy);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(740, 100, 54, 21));
        label_4 = new QLabel(Buy);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(740, 140, 54, 21));
        label_5 = new QLabel(Buy);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(750, 180, 41, 31));
        goods_company = new QLineEdit(Buy);
        goods_company->setObjectName(QStringLiteral("goods_company"));
        goods_company->setGeometry(QRect(600, 30, 121, 21));
        goods_name = new QLineEdit(Buy);
        goods_name->setObjectName(QStringLiteral("goods_name"));
        goods_name->setGeometry(QRect(600, 70, 121, 20));
        goods_price = new QLineEdit(Buy);
        goods_price->setObjectName(QStringLiteral("goods_price"));
        goods_price->setGeometry(QRect(600, 100, 121, 20));
        goods = new QTextBrowser(Buy);
        goods->setObjectName(QStringLiteral("goods"));
        goods->setGeometry(QRect(20, 30, 571, 351));
        history = new QPushButton(Buy);
        history->setObjectName(QStringLiteral("history"));
        history->setGeometry(QRect(600, 290, 121, 23));

        retranslateUi(Buy);

        QMetaObject::connectSlotsByName(Buy);
    } // setupUi

    void retranslateUi(QWidget *Buy)
    {
        Buy->setWindowTitle(QApplication::translate("Buy", "Form", 0));
        import_2->setText(QApplication::translate("Buy", "\347\241\256\345\256\232\351\207\207\350\264\255", 0));
        return_main->setText(QApplication::translate("Buy", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("Buy", "\351\207\207\350\264\255\345\205\254\345\217\270", 0));
        label_2->setText(QApplication::translate("Buy", "\345\225\206\345\223\201\345\220\215\347\247\260", 0));
        label_3->setText(QApplication::translate("Buy", "\345\225\206\345\223\201\345\215\225\344\273\267", 0));
        label_4->setText(QApplication::translate("Buy", "\351\207\207\350\264\255\346\225\260\351\207\217", 0));
        label_5->setText(QApplication::translate("Buy", "\346\200\273 \350\256\241", 0));
        history->setText(QApplication::translate("Buy", "\351\207\207\350\264\255\350\256\260\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class Buy: public Ui_Buy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_H
