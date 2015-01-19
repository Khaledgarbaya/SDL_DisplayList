#include "Rectangle.h"

bool Rectangle::intersects(const Rectangle &rect) {
    return false;
}

Rectangle *Rectangle::clone() const {
    return new Rectangle(*this);
}
