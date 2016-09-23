TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    io_format.c \
    database.c \
    md5interfase.c

HEADERS += \
    io_format.h \
    database.h \
    md5interfase.h
