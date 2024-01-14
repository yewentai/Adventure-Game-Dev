#ifndef GRAPHIC_BACKGROUND_POOL_H
#define GRAPHIC_BACKGROUND_POOL_H

#include <QObject>
#include <QImage>
#include "views/graphic_tile.h"

class PoolViewGraphic : public TileViewGraphic {
    Q_OBJECT

public:
    PoolViewGraphic(int size, int xPos, int yPos)
            : TileViewGraphic(size, xPos, yPos) {
        QPixmap resizedPixmap = (new QPixmap(QString(":/src/tile_images/pool.png")))->scaled(size, size);
        this->setPixmap(resizedPixmap);
        this->setZValue(1);
    };

private:
public
    slots:
};

#endif // GRAPHIC_BACKGROUND_POOL_H
