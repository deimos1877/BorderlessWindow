TEMPLATE = app
CONFIG += app_bundle
LIBS += gdi32.lib dwmapi.lib

HEADERS += \
    MainWindow.h \
    QMainPanel.h

SOURCES += main.cpp \
    MainWindow.cpp \
    QMainPanel.cpp

include("QtWinMigrate.pri")
include("Common.pri")

RESOURCES += \
    Icons.qrc

OTHER_FILES += \
    BorderlessWindow.css
