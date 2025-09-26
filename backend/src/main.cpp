#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "counter.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Counter counter;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("counter", &counter); // Делаем доступным в QML
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

