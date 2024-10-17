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
    QPushButton *loginButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *usernameEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QPushButton *signupButton;
    QLabel *messageLabel;
    QLabel *label_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(720, 480);
        login->setAutoFillBackground(false);
        login->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 68, 102);"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(240, 110, 241, 281));
        groupBox->setStyleSheet(QString::fromUtf8("gridline-color: rgb(255, 255, 255);"));
        groupBox->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(90, 190, 54, 21));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 2px solid #8f8f91; \n"
"	min-width : 50px;\n"
"	max-width : 50px;\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2ecc71;\n"
"    color: white;              \n"
"}"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 201, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label);

        usernameEdit = new QLineEdit(layoutWidget);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setEnabled(true);
        usernameEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:2px solid rgb(255,255,255);\n"
"	border-radius:10px;\n"
" \n"
"	color:#FFF\n"
"}"));

        horizontalLayout_3->addWidget(usernameEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEnabled(true);
        passwordEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:2px solid rgb(255,255,255);\n"
"	border-radius:10px;\n"
" \n"
"	color:#FFF\n"
"}"));

        horizontalLayout->addWidget(passwordEdit);


        verticalLayout->addLayout(horizontalLayout);

        signupButton = new QPushButton(groupBox);
        signupButton->setObjectName(QString::fromUtf8("signupButton"));
        signupButton->setGeometry(QRect(90, 220, 54, 21));
        signupButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 2px solid #8f8f91; \n"
"	min-width : 50px;\n"
"	max-width : 50px;\n"
"\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius:5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2ecc71;\n"
"    color: white;              \n"
"}"));
        messageLabel = new QLabel(groupBox);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setGeometry(QRect(21, 51, 199, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 50, 291, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Gothic [urw]"));
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);
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
        loginButton->setText(QCoreApplication::translate("login", "login", nullptr));
        label->setText(QCoreApplication::translate("login", " ID ", nullptr));
        label_2->setText(QCoreApplication::translate("login", " PW", nullptr));
        signupButton->setText(QCoreApplication::translate("login", "Sign up", nullptr));
        messageLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("login", "HyunBin SmartHome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
