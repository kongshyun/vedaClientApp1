/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QLabel *label_3;
    QDial *dial;
    QLabel *label;

    void setupUi(QWidget *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QString::fromUtf8("ChatWindow"));
        ChatWindow->resize(720, 480);
        ChatWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);\n"
"border: 1px solid black;\n"
"border-color: rgb(0, 0, 0);"));
        label_3 = new QLabel(ChatWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 30, 241, 141));
        label_3->setStyleSheet(QString::fromUtf8("    font: 800 11pt \"Cantarell Extra Bold\";\n"
"	background-color: rgb(253, 255, 222);\n"
"	border: 1px solid rgb(85, 85, 255);\n"
"	border-radius:15px;\n"
"	color:rgb(85, 85, 255);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dial = new QDial(ChatWindow);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(120, 30, 151, 131));
        dial->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 220, 255);"));
        label = new QLabel(ChatWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 51, 61));
        label->setStyleSheet(QString::fromUtf8("background-color : transparent;\n"
"border-color: transparent;"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(ChatWindow);

        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QWidget *ChatWindow)
    {
        ChatWindow->setWindowTitle(QCoreApplication::translate("ChatWindow", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("ChatWindow", "Temperature", nullptr));
        label->setText(QCoreApplication::translate("ChatWindow", "<html><head/><body><p><img src=\":/images/temperature.png\" width=\"50\" height=\"50\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
