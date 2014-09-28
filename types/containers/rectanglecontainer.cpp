#include "rectanglecontainer.h"

RectangleContainer::RectangleContainer(QQuickItem *parent): QQuickItem(parent) {
    p_size = 10;
    p_inited = false;
}

int RectangleContainer::size() const {
    return p_size;
}

bool RectangleContainer::inited() const {
    return p_inited;
}

void RectangleContainer::setSize(int &newValue) {
    if(p_size != newValue) {
        p_size = newValue;
        emit sizeChanged();
    }
}

void RectangleContainer::setInited(bool &newValue) {
    if(p_inited != newValue) {
        p_inited = newValue;
        emit initedChanged();
    }
}
