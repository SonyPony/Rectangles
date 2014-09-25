TEMPLATE = app

QT += qml quick widgets

SOURCES += main.cpp \
    types/game.cpp \
    types/containers/rectanglecontainer.cpp \
    types/singleObjects/gamerectangle.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    types/game.h \
    types/containers/rectanglecontainer.h \
    types/singleObjects/gamerectangle.h
