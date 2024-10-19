#ifndef CHATWINDOW1_H
#define CHATWINDOW1_H

#include <QWidget>

namespace Ui {
class ChatWindow1;
}

class ChatWindow1 : public QWidget
{
    Q_OBJECT

public:
    explicit ChatWindow1(QWidget *parent = nullptr);
    ~ChatWindow1();

private slots:
    void on_dial_valueChanged(int value);

private:
    Ui::ChatWindow1 *ui;
};

#endif // CHATWINDOW1_H
