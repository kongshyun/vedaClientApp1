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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QString::fromUtf8("ChatWindow"));
        ChatWindow->resize(800, 600);
        centralwidget = new QWidget(ChatWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ChatWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        ChatWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ChatWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ChatWindow->setStatusBar(statusbar);

        retranslateUi(ChatWindow);

        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWindow)
    {
        ChatWindow->setWindowTitle(QCoreApplication::translate("ChatWindow", "ChatWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
