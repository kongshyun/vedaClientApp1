#include "chatroomselection.h"
#include "ui_chatroomselection.h"

ChatRoomSelection::ChatRoomSelection(const QString &username, const QString &password, QTcpSocket *socket, QWidget *parent)
    : QMainWindow(parent),username(username), password(password), socket(socket),
    ui(new Ui::ChatRoomSelection)
{ 
    ui->setupUi(this);
    qDebug() << "ChatRoomSelection 윈도우 생성";
}

ChatRoomSelection::~ChatRoomSelection()
{
    delete ui;
}

void ChatRoomSelection::on_chatRoom1Button_clicked()
{
    qDebug() << "ChatRoom 1 Button clicked!";
}


void ChatRoomSelection::on_chatRoom2Button_clicked()
{
    qDebug() << "ChatRoom 2 Button clicked!";
}


void ChatRoomSelection::on_chatRoom3Button_clicked()
{
    qDebug() << "ChatRoom 3 Button clicked!";

}

