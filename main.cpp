#include <QApplication>
#include <QQmlApplicationEngine>

#include "types/game.h"
#include "types/singleObjects/gamerectangle.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<Game>("Game", 1, 0, "Game");
    qmlRegisterType<GameRectangle>("GameRectangle", 1, 0, "GameRectangle");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
