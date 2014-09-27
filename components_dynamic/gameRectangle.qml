import QtQuick 2.0
import GameRectangle 1.0

GameRectangle {
    id: gameRectangle

    width: 50
    height: width

    Text {
        text: gameRectangle.speed
        color: "white"

        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
