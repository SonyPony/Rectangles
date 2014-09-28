#ifndef RECTANGLECONTAINER_H
#define RECTANGLECONTAINER_H

#include <QQuickItem>

class RectangleContainer : public QQuickItem
{
    Q_OBJECT

    Q_PROPERTY(int size READ size WRITE setSize NOTIFY sizeChanged)
    Q_PROPERTY(bool inited READ inited WRITE setInited NOTIFY initedChanged)

    private:
        int p_size;
        bool p_inited;

    public:
        explicit RectangleContainer(QQuickItem *parent = 0);

        /*----Setters and getters----*/
        int size() const;
        bool inited() const;

        void setSize(int &newValue);
        void setInited(bool& newValue);
        /*---------------------------*/

    signals:
        void sizeChanged();
        void initedChanged();
};

#endif // RECTANGLECONTAINER_H
