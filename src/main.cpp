#include <QGuiApplication>
#include <QQmlApplicationEngine>

#ifdef QT_STATIC
#include <QtPlugin>
Q_IMPORT_PLUGIN(CommuniPlugin)
#endif // QT_STATIC

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);
    app.setOrganizationName("Commmuni");
    app.setApplicationName("QtQuick Example");
    QQmlApplicationEngine engine(QUrl("qrc:/main.qml"));
    return app.exec();
}
