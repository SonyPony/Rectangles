import QtQuick 2.3
import QtQuick.Controls 1.2

import Game 1.0
import RectangleContainer 1.0

import "logic/containerLogic.js" as ContainerLogic
import "components_static"

ApplicationWindow {
    id: root

    visible: true
    width: 854
    height: 480

    FontLoader {
        id: pixelFont
        source: "res/fonts/Fleftex_M.ttf"
    }

    Game {
        id: game

        Graphics {}

        RectangleContainer  {
            id: rectangleContainer

            /*---Game rectangles---*/
            property var objects: new Array
            /*---------------------*/

            Component.onCompleted: ContainerLogic.init()
        }
    }
}
