#ifndef CHATROOMSELECTION_H
#define CHATROOMSELECTION_H

#include <QWidget>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QTcpServer>
#include "chatwindow1.h"

namespace Ui {
class ChatRoomSelection;
}

class ChatRoomSelection : public QMainWindow//QWidget
{
    Q_OBJECT

public:
    //explicit ChatRoomSelection(QWidget *parent = nullptr);
    explicit ChatRoomSelection(const QString &username, const QString &password, QTcpSocket * socket, QWidget *parent = nullptr);
    ~ChatRoomSelection();

private:
    QTcpSocket *socket;                 // 각 채팅방이 사용할 소켓 정보
    QString username;
    QString password;
    bool window1 = false;               // 채팅방 1이 열려있는지 확인하는 플래그
    bool window2 = false;               // 채팅방 2이 열려있는지 확인하는 플래그
    bool window3 = false;               // 채팅방 2이 열려있는지 확인하는 플래그
    Ui::ChatRoomSelection *ui;

private slots:

    void on_chatRoom1Button_clicked();

    void on_chatRoom2Button_clicked();

    void on_chatRoom3Button_clicked();


};

#endif // CHATROOMSELECTION_H
