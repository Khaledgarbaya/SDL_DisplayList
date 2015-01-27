//
//  Rectangle.h
//
//  Copyright (c) 2015 Khaled Garbaya
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
#include "Point.h"
#include <string>
#ifndef __SDL_DisplayList_Rectangle__
#define __SDL_DisplayList_Rectangle__

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

#endif // defined(__SDL_DisplayList_Rectangle__)
