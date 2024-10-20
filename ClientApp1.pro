QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatroomselection.cpp \
    chatwindow1.cpp \
    chatwindow2.cpp \
    chatwindow3.cpp \
    login.cpp \
    main.cpp

HEADERS += \
    chatroomselection.h \
    chatwindow1.h \
    chatwindow2.h \
    chatwindow3.h \
    login.h

FORMS += \
    chatroomselection.ui \
    chatwindow1.ui \
    chatwindow2.ui \
    chatwindow3.ui \
    login.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
