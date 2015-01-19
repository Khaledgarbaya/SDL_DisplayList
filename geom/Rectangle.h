#include "Point.h"
#include <string>
#ifndef GEOM_RECTANGLE_H
#define GEOM_RECTANGLE_H

class Rectangle{
public:

    Rectangle(float x = 0 , float y = 0 , float width = 0, float height = 0) : x(x), y(y), width(width), height(height) {}

    Rectangle* clone() const;
    bool intersects(const Rectangle &rect);
    bool contains(float x, float y);
    bool containsPoint(const Point& point);
    void copyFrom(const Rectangle& rect);
    bool equals(const Rectangle& toCompare);
    void inflate(float dx, float dy);
    void inflatePoint(const Point& point);
    Rectangle intersection(const Rectangle& toIntersect) const;
    bool isEmpty();
    void offset(float dx, float dy);
    void offsetPoint(const Point& point);
    void setEmpty();
    void setTo(float x, float y, float width, float height);
    std::string toString();
    Rectangle* unionWith(const Rectangle& toUnion);
    Point* bottomRight, topLeft;
    float top, right, bottom, left;

    float x, y;
    float width, height;
};

#endif //end of GEOM_RECTANGLE_H

