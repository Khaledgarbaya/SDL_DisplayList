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

bool Rectangle::intersects(const Rectangle &rect)
{
    return (this->x < rect.width && rect.width > rect.x &&
            this->y < rect.height && this->height > rect.y);
}

Rectangle *Rectangle::clone() const
{
    return new Rectangle(*this);
}

bool Rectangle::contains(float x, float y) {
    return false;
}

bool Rectangle::containsPoint(const Point &point) {
    return false;
}

void Rectangle::copyFrom(const Rectangle &rect) {

}

bool Rectangle::equals(const Rectangle &toCompare) {
    return false;
}

void Rectangle::inflate(float dx, float dy) {

}

void Rectangle::inflatePoint(const Point &point) {

}

Rectangle Rectangle::intersection(const Rectangle &toIntersect) const {
    return Rectangle(0, 0, 0, 0);
}

bool Rectangle::isEmpty() {
    return false;
}

void Rectangle::offset(float dx, float dy) {

}

void Rectangle::offsetPoint(const Point &point) {

}

void Rectangle::setEmpty() {

}

void Rectangle::setTo(float x, float y, float width, float height) {

}

std::string Rectangle::toString() {
    return "";
}

Rectangle *Rectangle::unionWith(const Rectangle &toUnion) {
    return nullptr;
}
