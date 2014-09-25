#include "gamerectangle.h"

GameRectangle::GameRectangle(QQuickItem *parent): QQuickItem(parent) {}

int GameRectangle::direction() const {
    return p_direction;
}

qreal GameRectangle::speed() const {
    return p_speed;
}

void GameRectangle::setDirection(int &newValue) {
    if(p_direction != newValue) {
        p_direction = newValue;
        emit directionChanged();
    }
}

void GameRectangle::setSpeed(qreal &newValue) {
    if(p_speed != newValue) {
        p_speed = newValue;
        emit speedChanged();
    }
}
