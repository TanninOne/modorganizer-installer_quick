#-------------------------------------------------
#
# Project created by QtCreator 2012-12-22T22:13:35
#
#-------------------------------------------------

TARGET = installerQuick
TEMPLATE = lib

CONFIG += plugins
CONFIG += dll

DEFINES += INSTALLERQUICK_LIBRARY

SOURCES += installerquick.cpp \
    simpleinstalldialog.cpp

HEADERS += installerquick.h \
		simpleinstalldialog.h

FORMS += \
    simpleinstalldialog.ui

include(../plugin_template.pri)
