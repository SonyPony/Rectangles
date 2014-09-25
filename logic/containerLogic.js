function init() {
    var component;

    for(var i = 0; i<rectangleContainer.size; i++) {
        component = Qt.createComponent("../components_dynamic/gameRectangle.qml");

        rectangleContainer.objects[i] = component.createObject(rectangleContainer);
    }
}
