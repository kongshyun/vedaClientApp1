/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *messageLabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *usernameEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QPushButton *signupButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(240, 317);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 241, 281));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 201, 232));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        messageLabel = new QLabel(layoutWidget);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(messageLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        usernameEdit = new QLineEdit(layoutWidget);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setEnabled(true);

        horizontalLayout_3->addWidget(usernameEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEnabled(true);

        horizontalLayout->addWidget(passwordEdit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        verticalLayout_2->addWidget(loginButton);

        signupButton = new QPushButton(layoutWidget);
        signupButton->setObjectName(QString::fromUtf8("signupButton"));

        verticalLayout_2->addWidget(signupButton);

        login->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        messageLabel->setText(QCoreApplication::translate("login", "<html><head/><body><p><img src=\":/images/login.png\" width=\"100\" height=\"100\"/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("login", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("login", "PW", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "login", nullptr));
        signupButton->setText(QCoreApplication::translate("login", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
