//에어컨 관리 채팅방 (chatwindow1)

#include "chatwindow1.h"
#include "ui_chatwindow1.h"

ChatWindow1::ChatWindow1(QString id, int channel, QWidget *parent):
    QWidget(parent),
    ui(new Ui::ChatWindow1), socket(new QTcpSocket(this)), id(id), channel(channel)
  // 채팅방 소켓은 새로 생성하고, client로부터 id / channel 받아서 채팅방 객체 생성
{
    ui->setupUi(this);
    connectToServer("127.0.0.1", 12345); // 채팅방과 서버 연결
    connect(socket, &QTcpSocket::readyRead, this, &ChatWindow1::readServerData); // 소켓을 이용해 서버로부터 메세지 수신
}

ChatWindow1::~ChatWindow1()
{
    delete ui;
}

//에어컨 온도 조절 다이얼
void ChatWindow1::on_dial_valueChanged(int value)
{
    if (!airconState) {  // 에어컨이 꺼진 상태라면
        qDebug() << "Airconditioning is OFF. Dial cannot be changed.";
        return;
    }
    // 다이얼 값이 변경되면 서버로 메시지 전송
    QString dialMessage = id + " : " + QString::number(channel) + " : Temperature changed to " + QString::number(value);
    sendMessage(dialMessage);  // 서버로 다이얼 값 전송
}


//메시지 전송 버튼이 눌러지면
void ChatWindow1::on_sendButton_clicked()
{
    if (ui->messageInput->text().isEmpty()) {                           // 메시지가 비어 있는지 확인
        qDebug() << "Message input is empty. Not sending.";         // 로그 출력
        return;                                                     // 비어 있을 경우 전송 x
    }
    sendMessage(id + " : " + QString::number(channel) + " : "  + ui->messageInput->text());
    ui->messageInput->clear();                                          // 메세지 입력창 초기화

}

void ChatWindow1::connectToServer(const QString &host, quint16 port) {    // 호스트(서버) ip와 포트 번호 이용해서 서버에 접속
    socket->connectToHost(host, port);                                   // 채팅방 소켓 이용해서 서버에 접속하기
    if (socket->waitForConnected()) {                                    // 접속 로그 출력
        qDebug() << "ChatWindow connected to server!";
    }
    else {
        qDebug() << "ChatWindow failed to connect to server!";
    }
}

void ChatWindow1::sendMessage(const QString &message) {                  // 채팅방에서 서버로 채팅 메세지 전송
    if (socket->state() == QAbstractSocket::ConnectedState) {           // 소켓이 서버에 연결된 상태라면
        socket->write(message.toUtf8());                                // string 변환해서 서버로 전송
        qDebug() << "ChatWindow sent message:" << message;              // 전송 로그 출력
    }
    else {
        qDebug() << "ChatWindow not connected to server!";
    }
}

void ChatWindow1::readServerData() {                                     // 서버로부터 메세지 수신
    QByteArray data = socket->readAll();                                // 소켓 통해서 서버에서 보낸 데이터 읽기
    qDebug() << "ChatWindow received from server:" << data;             // 수신 완료 로그
    QString message = QString::fromUtf8(data);                          // 수신 데이터를 QString으로 변환

    QStringList messageParts = message.split(" : ");                    // 메시지를 ":"로 분리하여 채널 정보 확인
    if (messageParts.size() >= 3) {                                     // 메시지 형식이 올바른지 확인
        QString senderId = messageParts[0];                             // 발신자 ID
        int receivedChannel = messageParts[1].toInt();                  // 송신한 채널 번호
        QString content = messageParts[2];                              // 송신한 메시지 내용

        //if (receivedChannel == channel) {                                   // 송신자 채널과 수신자 채널이 같은 경우에만 출력
        //    ui->messageDisplay->appendPlainText(" "+senderId + " : " + content);    // 송신자 아이디와 메세지 출력
        //}
        if (content == "Airconditioning ON!") {
            ui->dial->setEnabled(true);  // 에어컨 켜짐 상태로 설정
            ui->airconON->setStyleSheet("background-color: rgb(255, 170, 127); color: black;");
            ui->airconOFF->setStyleSheet("");  // OFF 버튼 색상 초기화
            airconState = true;  // 에어컨 상태 업데이트
        } else if (content == "Airconditioning OFF!") {
            ui->dial->setEnabled(false);  // 에어컨 꺼짐 상태로 설정
            ui->airconOFF->setStyleSheet("background-color: rgb(216, 213, 255); color: black;");
            ui->airconON->setStyleSheet("");  // ON 버튼 색상 초기화
            airconState = false;  // 에어컨 상태 업데이트
        } else {
            ui->messageDisplay->appendPlainText(" " + senderId + " : " + content);  // 채팅 메시지 출력
        }
    }
}

void ChatWindow1::on_airconON_clicked()
{
    airconState = true;  // 에어컨이 켜짐
    QString airconStateMessage = id + " : "+"Airconditioning ON!";
    sendMessage(airconStateMessage);  // 서버로 다이얼 값 전송
    ui->dial->setEnabled(true); // 다이얼 조작 가능하게 설정
    ui->windBox->setEnabled(true);
    ui->airconON->setStyleSheet("background-color: rgb(255, 170, 127); color: black;");
    ui->airconOFF->setStyleSheet("");  // OFF 버튼 색상 초기화
}


void ChatWindow1::on_airconOFF_clicked()
{
    airconState = false;  // 에어컨이 꺼짐
    QString airconStateMessage = id + " : "+"Airconditioning OFF!";
    sendMessage(airconStateMessage);  // 서버로 상태 전송
    ui->dial->setEnabled(false); // 다이얼 조작 불가능하게 설정

    ui->airconOFF->setStyleSheet("background-color: rgb(216, 213, 255); color: black;");
    ui->airconON->setStyleSheet("");  // ON 버튼 색상 초기화

}



void ChatWindow1::on_comboBox_activated(int index)
{
    qDebug() << "SpinBox!";             // 수신 완료 로그

    QString airconWindMessage = id + " : " + QString::number(channel) + "Wind Speed changed to " + QString::number(index+1);
    sendMessage(airconWindMessage);  // 서버로 상태 전송

}


void ChatWindow1::on_windBox_currentIndexChanged(int index)
{
    qDebug() << "SpinBox!";             // 수신 완료 로그

    QString airconWindMessage = id + " : " + QString::number(channel) + "Wind Speed changed to " + QString::number(index+1);
    sendMessage(airconWindMessage);  // 서버로 상태 전송

}


void ChatWindow1::on_exitButton_clicked()
{
    this->close();
}

