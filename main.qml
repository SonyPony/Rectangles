import QtQuick 2.3
import QtQuick.Controls 1.2

import Game 1.0
import RectangleContainer 1.0

ApplicationWindow {
    visible: true
    width: 854
    height: 480

    Game {
        id: game

        RectangleContainer {
            id: container
        }
    }
}
