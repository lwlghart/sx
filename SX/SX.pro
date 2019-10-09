#-------------------------------------------------
#
# Project created by QtCreator 2019-07-03T22:51:27
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SX
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sqlhelper.cpp \
    dlg_modify_jh.cpp

HEADERS  += mainwindow.h \
    sqlhelper.h \
    db_sql.h \
    datarecord.h \
    common.h \
    dlg_modify_jh.h

FORMS    += mainwindow.ui \
    dlg_modify_jh.ui

DESTDIR += $$PWD/../bin

INCLUDEPATH +=$$PWD/../SXHeader
#LIBS    += -L$$PWD/../bin