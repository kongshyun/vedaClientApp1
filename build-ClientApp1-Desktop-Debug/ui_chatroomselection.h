/********************************************************************************
** Form generated from reading UI file 'chatroomselection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATROOMSELECTION_H
#define UI_CHATROOMSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatRoomSelection
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *chatRoom1Button;
    QGroupBox *groupBox_2;
    QPushButton *chatRoom2Button;
    QLabel *label_2;
    QGroupBox *groupBox_3;
    QPushButton *chatRoom3Button;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QWidget *ChatRoomSelection)
    {
        if (ChatRoomSelection->objectName().isEmpty())
            ChatRoomSelection->setObjectName(QString::fromUtf8("ChatRoomSelection"));
        ChatRoomSelection->resize(720, 480);
        ChatRoomSelection->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(ChatRoomSelection);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 351, 401));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 91, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        chatRoom1Button = new QPushButton(groupBox);
        chatRoom1Button->setObjectName(QString::fromUtf8("chatRoom1Button"));
        chatRoom1Button->setGeometry(QRect(30, 20, 300, 100));
        chatRoom1Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 800 11pt \"Cantarell Extra Bold\";\n"
"	background-color: rgb(253, 255, 222);\n"
"	border: 1px solid rgb(85, 85, 255);\n"
"	border-radius:20px;\n"
"	color:rgb(85, 85, 255);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(231, 229, 255);         \n"
"}"));
        chatRoom1Button->raise();
        label->raise();

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        chatRoom2Button = new QPushButton(groupBox_2);
        chatRoom2Button->setObjectName(QString::fromUtf8("chatRoom2Button"));
        chatRoom2Button->setGeometry(QRect(30, 20, 300, 100));
        chatRoom2Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 800 11pt \"Cantarell Extra Bold\";\n"
"	background-color: rgb(253, 255, 222);\n"
"	border: 1px solid rgb(85, 85, 255);\n"
"	border-radius:20px;\n"
"	color:rgb(85, 85, 255);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(231, 229, 255);         \n"
"}"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 30, 91, 71));
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        chatRoom3Button = new QPushButton(groupBox_3);
        chatRoom3Button->setObjectName(QString::fromUtf8("chatRoom3Button"));
        chatRoom3Button->setGeometry(QRect(30, 20, 300, 100));
        chatRoom3Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 800 11pt \"Cantarell Extra Bold\";\n"
"	background-color: rgb(253, 255, 222);\n"
"	border: 1px solid rgb(85, 85, 255);\n"
"	border-radius:20px;\n"
"	color:rgb(85, 85, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(231, 229, 255);         \n"
"}"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 40, 91, 71));
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));

        verticalLayout->addWidget(groupBox_3);

        label_3 = new QLabel(ChatRoomSelection);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 0, 291, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Quicksand Medium"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"font: 500 20pt \"Quicksand Medium\";\n"
"background-color:transparent;"));
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(ChatRoomSelection);

        QMetaObject::connectSlotsByName(ChatRoomSelection);
    } // setupUi

    void retranslateUi(QWidget *ChatRoomSelection)
    {
        ChatRoomSelection->setWindowTitle(QCoreApplication::translate("ChatRoomSelection", "Form", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("ChatRoomSelection", "<html><head/><body><p><img src=\":/images/aircon.png\" width=\"70\" height=\"70\" /></p></body></html>", nullptr));
        chatRoom1Button->setText(QCoreApplication::translate("ChatRoomSelection", "                             Air Conditional", nullptr));
        groupBox_2->setTitle(QString());
        chatRoom2Button->setText(QCoreApplication::translate("ChatRoomSelection", "                             TV control", nullptr));
        label_2->setText(QCoreApplication::translate("ChatRoomSelection", "<html><head/><body><p><img src=\":/images/tv.png\" width=\"60\" height=\"60\"/></p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        chatRoom3Button->setText(QCoreApplication::translate("ChatRoomSelection", "                             Window control", nullptr));
        label_4->setText(QCoreApplication::translate("ChatRoomSelection", "<html><head/><body><p><img src=\":/images/window.png\" width=\"60\" height=\"50\"/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("ChatRoomSelection", "Smart Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatRoomSelection: public Ui_ChatRoomSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATROOMSELECTION_H
