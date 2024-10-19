#include "client.h"

Client::Client(QWidget *parent)
    : QMainWindow(parent),loginui(new login)
{
    //loginui->setupUi(this);
    loginui->show();
    connect(loginui, &login::loginSuccessful, this, &Client::afterLogin);   // 로그인 위젯에서 채팅방 선택하는 위젯으로 변경하는 기능
}
Client::~Client()
{
    // 메모리 해제
    //delete loginui;
    //delete roomselectui;
}

void Client::afterLogin(const QString &username, const QString &password, QTcpSocket *socket)   // 로그인 이후 채팅방 선택하는 위젯으로 전환
{
    qDebug() << "afterLogin()!!!";
    this->username = username;  // 프로그램에서 사용할 사용자 이름 저장
    this->password = password;  // 프로그램에서 사용할 비밀번호 저장
    this->socket = socket;      // 채팅창과 서버랑 연결할때 사용할 소켓 저장

                                // 소켓의 부모를 Client로 설정
    socket->setParent(this);    // Client가 소켓을 관리하도록 설정 (매우 중요, 이 코드 없으면 서버 통신이 중간에 끊김)

    loginui->hide();

    //roomselectui= new ChatRoomSelection(username, password, socket, this);
    // 기존의 roomselectui가 이미 생성되었다면 삭제하거나 숨김 처리
    if (roomselectui) {
        qDebug() << "roomselectui already exists, removing old one";
        delete roomselectui;  // 기존 roomselectui 삭제
        roomselectui = nullptr;  // 포인터 초기화
    }

    // 새로운 roomselectui 생성
    qDebug() << "chatRoomSelection!!! new! ";
    roomselectui = new ChatRoomSelection(username, password, socket, this);
    setCentralWidget(roomselectui);  // 중앙 위젯을 채팅방 선택 UI로 설정
    roomselectui->show();
    qDebug() << "roomselectui->show()!!!";
}
