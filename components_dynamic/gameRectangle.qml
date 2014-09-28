import QtQuick 2.2
import GameRectangle 1.0

import "../logic/generalLogic.js" as GL

GameRectangle {
    id: gameRectangle

    x: root.width/2-gameRectangle.width/2

    width: 50
    height: width

    Text {
        text: gameRectangle.speed
        color: "white"

        font.pixelSize: parent.width*GL.fraction(15, 50)
        font.family: pixelFont.name

        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
    }

    NumberAnimation { objectName: "moveAnimation"; target: gameRectangle;property: "x" }

    MouseArea {
        anchors.fill: parent

        onPressed: {
            if(gameRectangle.x + mouse.x<root.width/2 && (direction == GameRectangle.ToLeft || direction == GameRectangle.None)) {
                gameRectangle.changeDirection(GameRectangle.ToRight)
            }
            else if(gameRectangle.x + mouse.x>=root.width/2 && (direction == GameRectangle.ToRight || direction == GameRectangle.None)) {
                gameRectangle.changeDirection(GameRectangle.ToLeft)
            }
        }
    }
}
