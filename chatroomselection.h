#ifndef CHATROOMSELECTION_H
#define CHATROOMSELECTION_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QTcpServer>

namespace Ui {
class ChatRoomSelection;
}

class ChatRoomSelection : public QWidget
{
    Q_OBJECT

public:
    explicit ChatRoomSelection(QWidget *parent = nullptr);
    ~ChatRoomSelection();

private slots:
    void on_chatRoom1Button_clicked();

    void on_chatRoom2Button_clicked();

    void on_chatRoom3Button_clicked();

private:
    Ui::ChatRoomSelection *ui;
};

#endif // CHATROOMSELECTION_H
