/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *loginBtn;
    QPushButton *quitBtn;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *pwdLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *background;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        layoutWidget = new QWidget(LoginDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 190, 158, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        loginBtn = new QPushButton(layoutWidget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_2->addWidget(loginBtn);

        quitBtn = new QPushButton(layoutWidget);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_2->addWidget(quitBtn);

        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 331, 101));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(71, 110, 41, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        layoutWidget_2 = new QWidget(LoginDialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(130, 110, 151, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pwdLineEdit = new QLineEdit(layoutWidget_2);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(pwdLineEdit);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 250, 61, 16));
        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 270, 121, 16));
        background = new QLabel(LoginDialog);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 1, 401, 301));
        background->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/image_s/UI.png);"));
        background->raise();
        layoutWidget->raise();
        label->raise();
        label_2->raise();
        layoutWidget_2->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        loginBtn->setText(QApplication::translate("LoginDialog", "\347\231\273\351\231\206", 0));
        quitBtn->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\344\275\277\347\224\250\345\205\213\346\213\211\347\216\233\344\276\235\344\270\255\345\277\203\345\214\273\351\231\242\n"
"\350\277\234\347\250\213\346\225\231\345\255\246\345\255\246\345\221\230\345\220\254\350\257\276\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("LoginDialog", "\347\211\210\346\234\254\357\274\2321.0", 0));
        label_4->setText(QApplication::translate("LoginDialog", "TextLabel", 0));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
