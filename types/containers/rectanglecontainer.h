#ifndef RECTANGLECONTAINER_H
#define RECTANGLECONTAINER_H

#include <QQuickItem>

class RectangleContainer : public QQuickItem
{
    Q_OBJECT

    Q_PROPERTY(int size READ size WRITE setSize NOTIFY sizeChanged)

    private:
        int p_size;

    public:
        explicit RectangleContainer(QQuickItem *parent = 0);

        /*----Setters and getters----*/
        int size() const;

        void setSize(int &newValue);
        /*---------------------------*/

    signals:
        void sizeChanged();
};

#endif // RECTANGLECONTAINER_H
