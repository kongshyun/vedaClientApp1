#include "chatroomselection.h"
#include "ui_chatroomselection.h"

ChatRoomSelection::ChatRoomSelection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatRoomSelection)
{
    ui->setupUi(this);
}

ChatRoomSelection::~ChatRoomSelection()
{
    delete ui;
}

void ChatRoomSelection::on_chatRoom1Button_clicked()
{

}


void ChatRoomSelection::on_chatRoom2Button_clicked()
{

}


void ChatRoomSelection::on_chatRoom3Button_clicked()
{

}

