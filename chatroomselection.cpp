#include "chatroomselection.h"
#include "ui_chatroomselection.h"
#include <QCloseEvent>
ChatRoomSelection::ChatRoomSelection(const QString &username, const QString &password, QTcpSocket *socket, QWidget *parent)
    : QMainWindow(parent),username(username), password(password), socket(socket),
    ui(new Ui::ChatRoomSelection),chatWindows1(new QMap<int, ChatWindow1*>),chatWindows2(new QMap<int, ChatWindow2*>),chatWindows3(new QMap<int, ChatWindow3*>)
{ 
    ui->setupUi(this);
    qDebug() << "ChatRoomSelection UI Window 생성";

}

ChatRoomSelection::~ChatRoomSelection()
{
    delete chatWindows1;  // QMap 메모리 해제
    delete chatWindows2;  // QMap 메모리 해제
    delete chatWindows3;  // QMap 메모리 해제
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
    if (chatWindows1->contains(channel)) {                                           // 이미 열린 채팅창이 있는지 확인
        qDebug() << "ChatWindow for channel" << channel << "is already open.";      // 로그 출력
        return;                                                                     // 이미 열려 있으면 아무것도 하지 않음
    }
    if (chatWindows2->contains(channel)) {                                           // 이미 열린 채팅창이 있는지 확인
        qDebug() << "ChatWindow for channel" << channel << "is already open.";      // 로그 출력
        return;                                                                     // 이미 열려 있으면 아무것도 하지 않음
    }
    if (chatWindows3->contains(channel)) {                                           // 이미 열린 채팅창이 있는지 확인
        qDebug() << "ChatWindow for channel" << channel << "is already open.";      // 로그 출력
        return;                                                                     // 이미 열려 있으면 아무것도 하지 않음
    }
    if(channel==1){
        ChatWindow1 *newChat = new ChatWindow1(username, channel);                              // 새로운 채팅창 생성
        chatWindows1->insert(channel, newChat);                                          // QMap(채팅창 관리)에 새 채팅창 추가
        newChat->show();
        connect(newChat, &ChatWindow1::destroyed, this, [this, channel]() {              // 채팅창이 닫힐 때 QMap에서 제거
            chatWindows1->remove(channel);                                               // 채팅창 제거
            qDebug() << "ChatWindow for channel" << channel << "closed.";               // 로그 출력
        });
    }
    else if(channel==2){
        ChatWindow2 *newChat = new ChatWindow2(username, channel);                              // 새로운 채팅창 생성
        chatWindows2->insert(channel, newChat);                                          // QMap(채팅창 관리)에 새 채팅창 추가
        newChat->show();
        connect(newChat, &ChatWindow2::destroyed, this, [this, channel]() {              // 채팅창이 닫힐 때 QMap에서 제거
            chatWindows2->remove(channel);                                               // 채팅창 제거
            qDebug() << "ChatWindow for channel" << channel << "closed.";               // 로그 출력
        });
    }
    else if(channel==3){
        ChatWindow3 *newChat = new ChatWindow3(username, channel);                              // 새로운 채팅창 생성
        chatWindows3->insert(channel, newChat);                                          // QMap(채팅창 관리)에 새 채팅창 추가
        newChat->show();
        connect(newChat, &ChatWindow3::destroyed, this, [this, channel]() {              // 채팅창이 닫힐 때 QMap에서 제거
            chatWindows3->remove(channel);                                               // 채팅창 제거
            qDebug() << "ChatWindow for channel" << channel << "closed.";               // 로그 출력
        });
    }


}


void ChatRoomSelection::closeEvent(QCloseEvent *event) {
    // 채팅창1 모두 닫기
    for (auto it = chatWindows1->begin(); it != chatWindows1->end(); ++it) {
        it.value()->close();
        delete it.value();
    }
    chatWindows1->clear();

    // 채팅창2 모두 닫기
    for (auto it = chatWindows2->begin(); it != chatWindows2->end(); ++it) {
        it.value()->close();
        delete it.value();
    }
    chatWindows2->clear();

    // 채팅창3 모두 닫기
    for (auto it = chatWindows3->begin(); it != chatWindows3->end(); ++it) {
        it.value()->close();
        delete it.value();
    }
    chatWindows3->clear();

    qDebug() << "모든 채팅창이 닫혔습니다.";

    // 부모 클래스의 closeEvent 호출 (기본 동작 유지)
    QMainWindow::closeEvent(event);
}
