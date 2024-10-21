#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QMainWindow(parent),ui(new Ui::login), socket(new QTcpSocket(this))
{
    qDebug() << " 로그인 윈도우 UI 생성 !!";
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}



void login::on_loginButton_clicked()
{
    username = ui->usernameEdit->text();         // 로그인 username
    password = ui->passwordEdit->text();         // 로그인 password

    if (username.isEmpty() || password.isEmpty()) {                                 // ID와 PW가 모두 입력되었는지 확인
        qDebug() << "ID or Password is empty. Not sending.";            // 로그 출력
        ui->messageLabel->setText("Please enter both ID and Password.");    // 경고문 출력
        return;
    }
    sendMessage("login : id = " + username + " / pw : " + password); // 서버로 로그인 정보(메시지) 전송
}


void login::connectToServer(const QString &host, quint16 port) {   // 서버에 접속하기(서버 주소, 서버 포트 이용)
    socket->connectToHost(host, port);                              // 서버 정보(주소, 포트) 이용하여 클라이언트 소켓으로 서버 접속 시도
    if (socket->waitForConnected()) {                               // 접속 성공/접속 실패 로그 출력
        qDebug() << "Connected to server!";
    }
    else {
        qDebug() << "Failed to connect to server!";
        ui->messageLabel->setText("Failed to connect to setver! ");
    }
}

void login::sendMessage(const QString &message) {                      // 서버로 로그인 정보(메세지) 보내기 ---> login : id = 아이디 / pw : 패스워드
    if (socket->state() == QAbstractSocket::ConnectedState) {           // 소켓 상태가 서버에 접속된 상태라면
        socket->write(message.toUtf8());                                // 소켓 통해서 로그인 정보 전송
        qDebug() << "Client sent message:" << message;                  // 로그 추가
        ui->messageLabel->setText(message);
        this->close();                                      // 메시지 전송 후 로그인 창 닫기

        //채팅창 고르는 윈도우 열기
        ChatRoomSelection* chatRoomSelection = new ChatRoomSelection(username, password, socket,nullptr); // 수정
        chatRoomSelection->show();// 시그널 받으면 Login에서 ChatRoomSelection으로 창 변경
    }
}
