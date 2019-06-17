#-------------------------------------------------
#
# Project created by QtCreator 2019-06-13T19:12:41
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ireader
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    register.cpp \
    user.cpp \
    author.cpp

HEADERS += \
        mainwindow.h \
    register.h \
    user.h \
    author.h \
    connection.h

FORMS += \
        mainwindow.ui \
    register.ui \
    user.ui \
    author.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../Qt5.12.1/5.12.1/clang_64/plugins/sqldrivers/release/ -lqsqlmysql
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../Qt5.12.1/5.12.1/clang_64/plugins/sqldrivers/debug/ -lqsqlmysql
else:unix: LIBS += -L$$PWD/../../Qt5.12.1/5.12.1/clang_64/plugins/sqldrivers/ -lqsqlmysql_debug

INCLUDEPATH += $$PWD/../../Qt5.12.1/5.12.1/clang_64/plugins/sqldrivers
DEPENDPATH += $$PWD/../../Qt5.12.1/5.12.1/clang_64/plugins/sqldrivers
