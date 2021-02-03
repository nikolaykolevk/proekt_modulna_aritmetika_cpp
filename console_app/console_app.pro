TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        comm_funcs.cpp \
        main.cpp \
        menu.cpp \
        tasks.cpp

HEADERS += \
    comm_funcs.h \
    menu.h \
    tasks.h
