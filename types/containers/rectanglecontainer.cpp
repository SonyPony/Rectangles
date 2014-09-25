#include "rectanglecontainer.h"

RectangleContainer::RectangleContainer(QQuickItem *parent): QQuickItem(parent) {}

int RectangleContainer::size() const {
    return p_size;
}

void RectangleContainer::setSize(int &newValue) {
    if(p_size != newValue) {
        p_size = newValue;
        emit sizeChanged();
    }
}
