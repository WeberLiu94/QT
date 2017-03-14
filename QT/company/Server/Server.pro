#-------------------------------------------------
#
# Project created by QtCreator 2015-07-01T08:20:24
#
#-------------------------------------------------

QT       += core gui
QT       +=network
QT      +=sql
QT      +=core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    excelengine.cpp \
    labor.cpp \
    fanancial.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    connection.h \
    excelengine.h \
    labor.h \
    fanancial.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    labor.ui \
    fanancial.ui

RESOURCES += \
    res.qrc
QT += axcontainer

