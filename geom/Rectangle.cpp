#include <ForceFeedback/ForceFeedback.h>
#include <iosfwd>
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
