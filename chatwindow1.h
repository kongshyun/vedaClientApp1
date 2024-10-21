#ifndef CHATWINDOW1_H
#define CHATWINDOW1_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class ChatWindow1;
}

class ChatWindow1 : public QWidget
{
    Q_OBJECT

public:
    explicit ChatWindow1(QString id, int channel, QWidget *parent = nullptr);
    ~ChatWindow1();
    void connectToServer(const QString &host, quint16 port);                    // 채팅방과 서버 연결
    void sendMessage(const QString &message);                                   // 채팅방에서 서버로 메세지 전송

private slots:
    void readServerData();   // 서버에서 송신한 메세지 수신하기
    void on_dial_valueChanged(int value);
    void on_sendButton_clicked();

    void on_airconON_clicked();

    void on_airconOFF_clicked();

    void on_windBox_currentIndexChanged(int index);

    void on_exitButton_clicked();

private:
    Ui::ChatWindow1 *ui;
    QTcpSocket *socket;                     // 채팅창 소켓

    QString id;                             // 채팅방 사용자 아이디
    int channel;                            // 채팅방 채널(1,2,3)
    bool airconState = false;  // 에어컨이 꺼진 상태로 시작
};

#endif // CHATWINDOW1_H
