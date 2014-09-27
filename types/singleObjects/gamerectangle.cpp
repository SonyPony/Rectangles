#include "gamerectangle.h"
#include <QPainter>

GameRectangle::GameRectangle(QQuickItem *parent): QQuickPaintedItem(parent) {
    p_direction = GameRectangle::None;
    p_speed = 0;
    p_color = "#CCCCCC";
}

void GameRectangle::paint(QPainter *painter) {
    painter->setPen(QPen(p_color, 2));
    painter->setBrush(QBrush(p_color));
    painter->setRenderHint(QPainter::Antialiasing, false);
    painter->drawRect(boundingRect().adjusted(1, 1, -1, -1));
}

QColor GameRectangle::color() const {
    return p_color;
}

int GameRectangle::direction() const {
    return p_direction;
}

qreal GameRectangle::speed() const {
    return p_speed;
}

void GameRectangle::setColor(QColor &newValue) {
    if(p_color != newValue) {
        p_color = newValue;
        emit colorChanged();
    }
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
