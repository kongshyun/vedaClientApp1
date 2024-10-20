#include <QApplication>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    login w;
    w.connectToServer("127.0.0.1", 12345); // 연결할 서버 IP와 포트
    w.show();
    return a.exec();
}
