//
//  Rectangle.cpp
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

#include "Rectangle.h"
#include <cmath>
bool Rectangle::intersects(const Rectangle &rect)
{
    return (this->x < rect.width && rect.width > rect.x &&
            this->y < rect.height && this->height > rect.y);
}

Rectangle *Rectangle::clone() const
{
    return new Rectangle(*this);
}

bool Rectangle::contains(float x, float y) 
{
	return (x < (this->x + (.5*this->width)) && x >(this->x - (.5*this->width)) &&
		y < (this->y + (.5*this->height)) && y >(this->y - (.5*this->height)));	
}

bool Rectangle::containsPoint(const Point &point) 
{
    return contains(point.x, point.y);
}

void Rectangle::copyFrom(const Rectangle &rect) 
{
	setTo(rect.x, rect.y, rect.width, rect.height);
}

bool Rectangle::equals(const Rectangle &toCompare) 
{
	return this->x == toCompare.x &&
		   this->y == toCompare.y &&
		   this->width == toCompare.width &&
		   this->height == toCompare.height;
}

void Rectangle::inflate(float dx, float dy) 
{
	this->x -= dx;
	this->y -= dy;
	this->width += 2 * dx;
	this->height += 2 * dy;
}

void Rectangle::inflatePoint(const Point &point) 
{
	inflate(point.x, point.y);
}

Rectangle Rectangle::intersection(const Rectangle &toIntersect) const 
{
    return Rectangle(0, 0, 0, 0);/// TODO implement me
}

bool Rectangle::isEmpty() 
{
    return x == 0 && y==0 && width == 0 && height == 0;
}

void Rectangle::offset(float dx, float dy) 
{
	this->x += dx;
	this->y += dy;
}

void Rectangle::offsetPoint(const Point &point) 
{
	this->x += point.x;
	this->y += point.y;
}

void Rectangle::setEmpty() 
{
	x = 0; y = 0; width = 0; height = 0;
}

void Rectangle::setTo(float x, float y, float width, float height) 
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

std::string Rectangle::toString() 
{
    return "[Object] Ractangle  { x : " + this->x + 
								" y : " + this->y + 
								" width : " + this->width + 
								" height : " + this-> height + 
								" }";
}

Rectangle *Rectangle::unionWith(const Rectangle &toUnion) 
{
	int x1 = fmin(this->x, toUnion.x);
	int x2 = fmax(this->x + this->width, toUnion.x + toUnion.width);
	int y1 = fmin(this->y, toUnion.y);
	int y2 = fmax(this->y + this->height, toUnion.y + toUnion.height);
	return new Rectangle(x1, y1, x2 - x1, y2 - y1);
}
