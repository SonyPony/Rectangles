#ifndef GAMERECTANGLE_H
#define GAMERECTANGLE_H

#include <QQuickItem>
#include <QQuickPaintedItem>

class GameRectangle : public QQuickPaintedItem
{
    Q_OBJECT

    Q_ENUMS(DirEnum)
    Q_PROPERTY(int direction READ direction WRITE setDirection NOTIFY directionChanged)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(qreal speed READ speed WRITE setSpeed NOTIFY speedChanged)

    private:
        qreal p_speed;
        QColor p_color;
        int p_direction;
        static const int koeficient = 500;

    public:
        explicit GameRectangle(QQuickItem *parent = 0);

        enum DirEnum { None, ToLeft, ToRight };

        Q_INVOKABLE void changeDirection(int arg_Direction);
        void paint(QPainter* painter);

        /*----Setters and getters----*/
        int direction() const;
        qreal speed() const;
        QColor color() const;

        void setDirection(int &newValue);
        void setSpeed(qreal& newValue);
        void setColor(QColor& newValue);
        /*---------------------------*/

    signals:
        void directionChanged();
        void speedChanged();
        void colorChanged();
};

#endif // GAMERECTANGLE_H
