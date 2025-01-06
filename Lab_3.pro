QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH += path/to/OpenHardwareMonitor

# Windows libraries
LIBS += -lPdh -lole32 -loleaut32 -luuid -lwbemuuid -L$$PWD

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    airwindow.cpp \
    control.cpp \
    home.cpp \
    main.cpp \
    lab.cpp \
    page.cpp \
    remotepc.cpp \
    set.cpp

HEADERS += \
    airwindow.h \
    control.h \
    home.h \
    lab.h \
    page.h \
    remotepc.h \
    set.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    logo.png \
    terminal.png

RESOURCES += \
    Icon.qrc
