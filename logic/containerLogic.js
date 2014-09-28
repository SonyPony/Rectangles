.import "generalLogic.js" as GL

function init() {
    rectangleContainer.inited = true

    var component;
    var spacing = root.height*GL.fraction(10, 480);
    var columnHeight = (rectangleContainer.size/2) * (spacing + root.height*GL.fraction(50, 480));
    var size = rectangleContainer.size;
    var rectSize = root.height*GL.fraction(50, 480);
    var spacingFromLine = root.width*GL.fraction(30, 854);

    for(var i = 0; i<size; i++) {
        component = Qt.createComponent("../components_dynamic/gameRectangle.qml");

        rectangleContainer.objects[i] = component.createObject(root);
        if(i<size/2) {
            rectangleContainer.objects[i].x = root.width/2 - (spacingFromLine+rectSize);
            rectangleContainer.objects[i].y = (root.height-columnHeight)/2 + i*rectSize + i*spacing;
        }
        else {
            rectangleContainer.objects[i].x = root.width/2 + spacingFromLine;
            rectangleContainer.objects[i].y = (root.height-columnHeight)/2 + (i-size/2)*rectSize + (i-size/2)*spacing;
        }
    }
}
