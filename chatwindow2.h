#ifndef CHATWINDOW2_H
#define CHATWINDOW2_H

#include <QWidget>
#include <QTcpSocket>
#include <QStringList>

namespace Ui {
class ChatWindow2;
}

class ChatWindow2 : public QWidget
{
    Q_OBJECT

public:
    explicit ChatWindow2(QString id, int channel, QWidget *parent = nullptr);
    ~ChatWindow2();
    void connectToServer(const QString &host, quint16 port);                    // 채팅방과 서버 연결
    void sendMessage(const QString &message);                                   // 채팅방에서 서버로 메세지 전송

private slots:
    void readServerData();   // 서버에서 송신한 메세지 수신하기
    void on_sendButton_clicked();

    void on_exitButton_clicked();

    void on_soundSlider_actionTriggered(int action);

    void on_channelBox_valueChanged(int arg1);

protected:
    //QString textFromValue(int value) const override;  // 값을 텍스트로 변환

private:
    Ui::ChatWindow2 *ui;
    QTcpSocket *socket;                     // 채팅창 소켓

    QString id;                             // 채팅방 사용자 아이디
    int channel;                            // 채팅방 채널(1,2,3)

    QStringList platformList;  // 플랫폼 리스트
};

#endif // CHATWINDOW2_H
