include(lib/libcommuni/src/src.pri)

TEMPLATE = app

QT += quick network


SOURCES += src/main.cpp

RESOURCES += qml.qrc

OTHER_FILES += qml/main.qml
OTHER_FILES += qml/BufferListView.qml
OTHER_FILES += qml/ChatPage.qml
OTHER_FILES += qml/ConnectPage.qml
OTHER_FILES += qml/MessageFormatter.qml
OTHER_FILES += qml/TextBrowser.qml
OTHER_FILES += qml/TextEntry.qml
OTHER_FILES += qml/TopicLabel.qml
OTHER_FILES += qml/UserListView.qml
