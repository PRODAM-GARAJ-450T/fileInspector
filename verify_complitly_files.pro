TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/openssl/lib/ -lcrypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/openssl/lib/ -lcrypto
else:unix: LIBS += -L$$PWD/openssl/lib/ -lcrypto

INCLUDEPATH += $$PWD/openssl/include
DEPENDPATH += $$PWD/openssl/include

SOURCES += main.c \
    io_format.c \
    database.c \
    md5interfase.c \
    strdestroyer.c

HEADERS += \
    io_format.h \
    database.h \
    md5interfase.h \
    strdestroyer.h



