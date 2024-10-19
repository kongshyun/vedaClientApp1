#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QMainWindow(parent),ui(new Ui::login)
{
    qDebug() << " 로그인 UI!!!";
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}



void login::on_loginButton_clicked()
{
    QString username = ui->usernameEdit->text();         // 로그인 username
    QString password = ui->passwordEdit->text();         // 로그인 password
    QString serverAddress = "127.0.0.1";             // 접속할 서버 ip 주소

    loginSocket = new QTcpSocket(this);               // 로그인시 서버와 연결할 소켓 객체 생성
    loginSocket->connectToHost(serverAddress, 12345); // 소켓 바인드(IP주소, 포트 이용)

    if (loginSocket->waitForConnected()) {                                  // 서버와 연결되면
        qDebug() << "Connected to server.";                                 // 연결 성공 로그 출력

        loginSocket->write(username.toUtf8() + " " + password.toUtf8());     // 로그인 정보(입력한 username, password) 를 서버로 전송

        if (loginSocket->waitForReadyRead()) {                              // 서버의 응답을 기다림
            QByteArray response = loginSocket->readAll();                   // 서버로부터 받은 데이터 ( 서버 응답 == "client connected" )
            QString serverResponse = QString::fromUtf8(response);
            ui->messageLabel->setText(serverResponse);
            this->hide();
            ChatRoomSelection* chatRoomSelection = new ChatRoomSelection(username, password, loginSocket,this);
            chatRoomSelection->show();// 시그널 받으면 Login에서 ChatRoomSelection으로 창 변경
            //emit loginSuccessful(username, password, loginSocket);          // 정상적으로 서버로부터 데이터 받으면 loginSuccessful 시그널 발생
                                                                            // loginSuccessful 시그널은 Client가 받을 예정
                                                                            // 시그널 받으면 Login에서 ChatRoomSelection으로 창 변경
        }
    }
    else {
        ui->messageLabel->setText("Failed to connect to the server");
    }
}
