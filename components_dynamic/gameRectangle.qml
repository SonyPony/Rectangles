import QtQuick 2.0
import GameRectangle 1.0

import "../logic/generalLogic.js" as GL

GameRectangle {
    id: gameRectangle

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

    MouseArea {
        anchors.fill: parent

        onClicked: {
            if(gameRectangle.x + mouse.x>root.width/2)
                console.log("Hráč 1");
            else
                console.log("Hráč 2");
        }
    }
}
