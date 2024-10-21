#ifndef CHATROOMSELECTION_H
#define CHATROOMSELECTION_H

#include <QWidget>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QTcpServer>
#include <QMap>
#include "chatwindow1.h"
#include "chatwindow2.h"
#include "chatwindow3.h"
namespace Ui {
class ChatRoomSelection;
}

class ChatRoomSelection : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChatRoomSelection(const QString &username, const QString &password, QTcpSocket * socket, QWidget *parent = nullptr);
    ~ChatRoomSelection();

private:
    QTcpSocket *socket;                 // 각 채팅방이 사용할 소켓 정보
    QString username;
    QString password;
    Ui::ChatRoomSelection *ui;

    QMap<int, ChatWindow1*> *chatWindows1; // 채팅창을 관리할 QMap 추가
    QMap<int, ChatWindow2*> *chatWindows2; // 채팅창을 관리할 QMap 추가
    QMap<int, ChatWindow3*> *chatWindows3; // 채팅창을 관리할 QMap 추가


private slots:
    void on_chatRoom1Button_clicked(); // 에어컨 관리 채팅창
    void on_chatRoom2Button_clicked(); // TV 관리 채팅창
    void on_chatRoom3Button_clicked(); // 창문 관리 채팅창
    void openNewChatWindow(int channel);

    void on_quitButton_clicked();
};
#endif // CHATROOMSELECTION_H
