#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTcpSocket>


namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
signals:
    void loginSuccessful(const QString &username, const QString &password, QTcpSocket * socket);

private slots:
    void handleLogin();// 로그인 버튼 누른 후 로그인 처리

private:
    Ui::login *ui;
    QTcpSocket * loginSocket;       // 로그인 시 서버와 연결할 소켓
};

#endif // LOGIN_H
