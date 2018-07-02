#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <IrcConnection>
#include <IrcCommand>
#include <Irc>
#include <IrcModel>
#include <IrcUtil>

#ifdef QT_STATIC
#include <QtPlugin>
Q_IMPORT_PLUGIN(CommuniPlugin)
#endif // QT_STATIC

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);

    Irc::registerMetaTypes();
    const char *uri = "Communi";
    qmlRegisterType<Irc>(uri, 3, 0, "Irc");
    qmlRegisterType<Irc>(uri, 3, 2, "Irc");
    qmlRegisterType<Irc>(uri, 3, 3, "Irc");
    qmlRegisterType<Irc>(uri, 3, 4, "Irc");
    qmlRegisterType<Irc>(uri, 3, 5, "Irc");
    qmlRegisterType<IrcCommand>(uri, 3, 0, "IrcCommand");
    qmlRegisterType<IrcConnection>(uri, 3, 0, "IrcConnection");
    qmlRegisterUncreatableType<IrcMessage>(uri, 3, 0, "IrcMessage", "Cannot create an instance of IrcMessage. Use IrcConnection::messageReceived() signal instead.");
    qmlRegisterUncreatableType<IrcNetwork>(uri, 3, 0, "IrcNetwork", "Cannot create an instance of IrcNetwork. Use IrcConnection::network property instead.");
    // IrcModel
    qmlRegisterType<IrcBuffer>(uri, 3, 0, "IrcBuffer");
    qmlRegisterType<IrcBufferModel>(uri, 3, 0, "IrcBufferModel");
    qmlRegisterType<IrcChannel>(uri, 3, 0, "IrcChannel");
    qmlRegisterType<IrcUser>(uri, 3, 0, "IrcUser");
    qmlRegisterType<IrcUserModel>(uri, 3, 0, "IrcUserModel");
    // IrcUtil
    qmlRegisterType<IrcCommandParser>(uri, 3, 0, "IrcCommandParser");
    qmlRegisterType<IrcLagTimer>(uri, 3, 0, "IrcLagTimer");
    qmlRegisterType<IrcTextFormat>(uri, 3, 0, "IrcTextFormat");
    qmlRegisterUncreatableType<IrcPalette>(uri, 3, 0, "IrcPalette", "Cannot create an instance of IrcPalette. Use IrcTextFormat::palette property instead.");
    qmlRegisterType<IrcCompleter>(uri, 3, 1, "IrcCompleter");

    app.setOrganizationName("Commmuni");
    app.setApplicationName("QtQuick Example");
    QQmlApplicationEngine engine(QUrl("qrc:/main.qml"));


    return app.exec();
}
