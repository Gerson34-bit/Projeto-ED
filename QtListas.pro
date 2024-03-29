#-------------------------------------------------
#
# Project created by QtCreator 2019-03-10T00:15:40
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = QtTetris
TEMPLATE = app
QT += multimedia
RC_ICONS += picture/tetris.ico

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
CONFIG += precompiledHeader.h
PRECOMPILED_HEADER = precompiledHeader.h

SOURCES += \
    elementolistasequencial.cpp \
    janelalistaduplamenteencadeada.cpp \
    janelalistaencadeada.cpp \
    janelalistasequencial.cpp \
    janelalistasequenciallogica.cpp \
    janelamenulistas.cpp \
    listasequencial.cpp \
        main.cpp

HEADERS += \
    elementolistasequencial.h \
    janelalistaduplamenteencadeada.h \
    janelalistaencadeada.h \
    janelalistasequencial.h \
    janelalistasequenciallogica.h \
    janelamenulistas.h \
    listasequencial.h \
    precompiledHeader.h \
    ui_janelalistasequencial.h

FORMS += \
        janelalistaduplamenteencadeada.ui \
        janelalistaencadeada.ui \
        janelalistasequencial.ui \
        janelamenulistas.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
