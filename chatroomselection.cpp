#include "chatroomselection.h"
#include "ui_chatroomselection.h"

ChatRoomSelection::ChatRoomSelection(const QString &username, const QString &password, QTcpSocket *socket, QWidget *parent)
    : QMainWindow(parent),username(username), password(password), socket(socket),
    ui(new Ui::ChatRoomSelection),chatWindows(new QMap<int, ChatWindow1*>)
{ 
    ui->setupUi(this);
    qDebug() << "ChatRoomSelection UI Window 생성";
}

ChatRoomSelection::~ChatRoomSelection()
{
    delete chatWindows;  // QMap 메모리 해제
    delete ui;
}

void ChatRoomSelection::on_chatRoom1Button_clicked()
{
    qDebug() << "ChatRoom 1 Button clicked!";
    openNewChatWindow(1);
}


void ChatRoomSelection::on_chatRoom2Button_clicked()
{
    qDebug() << "ChatRoom 2 Button clicked!";
    openNewChatWindow(2);
}


void ChatRoomSelection::on_chatRoom3Button_clicked()
{
    qDebug() << "ChatRoom 3 Button clicked!";
    openNewChatWindow(3);

}


void ChatRoomSelection::openNewChatWindow(int channel) {                                       // 채팅창 생성 및 열기
    if (chatWindows->contains(channel)) {                                           // 이미 열린 채팅창이 있는지 확인
        qDebug() << "ChatWindow for channel" << channel << "is already open.";      // 로그 출력
        return;                                                                     // 이미 열려 있으면 아무것도 하지 않음
    }
    if(channel==1){
        ChatWindow1 *newChat = new ChatWindow1(username, channel);                              // 새로운 채팅창 생성
        chatWindows->insert(channel, newChat);                                          // QMap(채팅창 관리)에 새 채팅창 추가
        newChat->show();
        connect(newChat, &ChatWindow1::destroyed, this, [this, channel]() {              // 채팅창이 닫힐 때 QMap에서 제거
            chatWindows->remove(channel);                                               // 채팅창 제거
            qDebug() << "ChatWindow for channel" << channel << "closed.";               // 로그 출력
        });
    }
    else if(channel==2){
        ChatWindow1 *newChat = new ChatWindow1(username, channel);                              // 새로운 채팅창 생성
        chatWindows->insert(channel, newChat);                                          // QMap(채팅창 관리)에 새 채팅창 추가
        newChat->show();
        connect(newChat, &ChatWindow1::destroyed, this, [this, channel]() {              // 채팅창이 닫힐 때 QMap에서 제거
            chatWindows->remove(channel);                                               // 채팅창 제거
            qDebug() << "ChatWindow for channel" << channel << "closed.";               // 로그 출력
        });
    }
    else if(channel==3){
        ChatWindow1 *newChat = new ChatWindow1(username, channel);                              // 새로운 채팅창 생성
        chatWindows->insert(channel, newChat);                                          // QMap(채팅창 관리)에 새 채팅창 추가
        newChat->show();
        connect(newChat, &ChatWindow1::destroyed, this, [this, channel]() {              // 채팅창이 닫힐 때 QMap에서 제거
            chatWindows->remove(channel);                                               // 채팅창 제거
            qDebug() << "ChatWindow for channel" << channel << "closed.";               // 로그 출력
        });
    }


}
