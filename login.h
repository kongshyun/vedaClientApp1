#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTcpSocket>
#include "chatroomselection.h"

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
    void connectToServer(const QString &host, quint16 port);    // 서버에 접속하기

private slots:

    void on_loginButton_clicked(); //handleLogin():로그인 버튼 누른 후 로그인 처리
    void sendMessage(const QString &message);                                   // 채팅방에서 서버로 메세지 전송
private:
    Ui::login *ui;
    QTcpSocket * socket;       // 로그인 시 서버와 연결할 소켓
    QString username;
    QString password;

};

#endif // LOGIN_H
