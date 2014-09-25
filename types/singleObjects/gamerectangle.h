#ifndef GAMERECTANGLE_H
#define GAMERECTANGLE_H

#include <QQuickItem>

class GameRectangle : public QQuickItem
{
    Q_OBJECT

    Q_PROPERTY(int direction READ direction WRITE setDirection NOTIFY directionChanged)
    Q_PROPERTY(qreal speed READ speed WRITE setSpeed NOTIFY speedChanged)

    private:
        qreal p_speed;
        int p_direction;

    public:
        explicit GameRectangle(QQuickItem *parent = 0);

        /*----Setters and getters----*/
        int direction() const;
        qreal speed() const;

        void setDirection(int &newValue);
        void setSpeed(qreal& newValue);
        /*---------------------------*/

    signals:
        void directionChanged();
        void speedChanged();
};

#endif // GAMERECTANGLE_H
