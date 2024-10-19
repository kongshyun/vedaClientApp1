#include "chatwindow1.h"
#include "ui_chatwindow1.h"

ChatWindow1::ChatWindow1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatWindow1)
{
    ui->setupUi(this);
}

ChatWindow1::~ChatWindow1()
{
    delete ui;
}

void ChatWindow1::on_dial_valueChanged(int value)
{

}

