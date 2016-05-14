#-------------------------------------------------
#
# Project created by QtCreator 2016-05-09T10:04:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = begin
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    start.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    start.h \
    dialog.h

FORMS    += mainwindow.ui \
    start.ui \
    dialog.ui

RESOURCES += \
    background.qrc \
    red.qrc \
    blue.qrc \
    background1.qrc \
    good.qrc \
    sub.qrc \
    last.qrc
