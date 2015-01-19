#include "Point.h"
#ifndef GEOM_RECTANGLE_H
#define GEOM_RECTANGLE_H

class Rectangle{
public:

    Rectangle(float x = 0 , float y = 0 , float width = 0, float height = 0) : x(x), y(y), width(width), height(height) {
    }
    Rectangle* clone() const;
    bool intersects(const Rectangle &rect);

    Point* bottomRight, topLeft;
    float top, right, bottom, left;

    float x, y;
    float width, height;
};

#endif //end of GEOM_RECTANGLE_H

