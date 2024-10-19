#ifndef CLIENTDATA_H
#define CLIENTDATA_H

#include <QMainWindow>
#include <QTcpSocket>

struct clientdata{
    QTcpSocket *socket; // 서버와의 소켓
    QString username;
    QString password;
    QString port;
};

#endif // CLIENTDATA_H
