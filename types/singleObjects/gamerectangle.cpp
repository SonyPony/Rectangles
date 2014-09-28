#include "gamerectangle.h"
#include <QPainter>

GameRectangle::GameRectangle(QQuickItem *parent): QQuickPaintedItem(parent) {
    p_direction = GameRectangle::None;
    p_speed = 0;
    p_color = "#CCCCCC";
}

void GameRectangle::changeDirection(int arg_Direction = 0) {
    QObject *animation = this->findChild<QObject*>("moveAnimation");

    if(p_speed != 9.9)
        this->setProperty("speed", p_speed+0.1);
    p_direction = arg_Direction;
    p_color = (p_direction == GameRectangle::ToLeft) ?"#FFC90E" :"#B5E61D";

    animation->setProperty("running", false);
    animation->setProperty("duration", 5000.0-koeficient*p_speed);

    if(arg_Direction == GameRectangle::ToLeft)
        animation->setProperty("to", 0);

    else if(arg_Direction == GameRectangle::ToRight)
        animation->setProperty("to", this->parent()->property("width").toInt()-this->property("width").toInt());
    QMetaObject::invokeMethod(animation, "start");
    this->update();
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
