#-------------------------------------------------
#
# Project created by QtCreator 2016-11-16T10:24:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GraphicTriqui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menuwidget.cpp \
    gamewidget.cpp

HEADERS  += mainwindow.h \
    menuwidget.h \
    gamewidget.h

FORMS    += mainwindow.ui \
    menuwidget.ui \
    gamewidget.ui

RESOURCES += \
    myresources.qrc
