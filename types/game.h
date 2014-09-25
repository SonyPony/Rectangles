#ifndef GAME_H
#define GAME_H

#include <QQuickItem>

class Game : public QQuickItem
{
    Q_OBJECT

    Q_PROPERTY(bool over READ over WRITE setOver NOTIFY overChanged)
    Q_PROPERTY(bool paused READ paused WRITE setPaused NOTIFY pausedChanged)

    private:
        bool p_over;
        bool p_paused;

    public:
        explicit Game(QQuickItem *parent = 0);

        /*----Setters and getters----*/
        bool over() const;
        bool paused() const;

        void setOver(bool& newValue);
        void setPaused(bool& newValue);
        /*---------------------------*/

    signals:
        void overChanged();
        void pausedChanged();
};

#endif // GAME_H
