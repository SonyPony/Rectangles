import QtQuick 2.0

import "../logic/generalLogic.js" as GL

Item {
    width: root.width
    height: root.height

    Rectangle {
        color: "#CCCCCC"

        width: parent.width*GL.fraction(8, 854)
        height: root.height

        anchors.horizontalCenter: parent.horizontalCenter
    }
}
