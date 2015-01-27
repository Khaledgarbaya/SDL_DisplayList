//
//  DisplayObject.h
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
#ifndef __SDL_DisplayList_DisplayObject__
#define __SDL_DisplayList_DisplayObject__

class  DisplayObject{
public:

    DisplayObject();

    ~DisplayObject() {
    }

    float getX() const {
        return x;
    }

    void setX(float x) {
        DisplayObject::x = x;
    }

    float getY() const {
        return y;
    }

    void setY(float y) {
        DisplayObject::y = y;
    }

    float getWidth() const {
        return width;
    }

    void setWidth(float width) {
        DisplayObject::width = width;
    }

    float getHeight() const {
        return height;
    }

    void setHeight(float height) {
        DisplayObject::height = height;
    }

    float getRotationX() const {
        return rotationX;
    }

    void setRotationX(float rotationX) {
        DisplayObject::rotationX = rotationX;
    }

    float getRotationY() const {
        return rotationY;
    }

    void setRotationY(float rotationY) {
        DisplayObject::rotationY = rotationY;
    }

    float getScaleX() const {
        return scaleX;
    }

    void setScaleX(float scaleX) {
        DisplayObject::scaleX = scaleX;
    }

    float getScaleY() const {
        return ScaleY;
    }

    void setScaleY(float ScaleY) {
        DisplayObject::ScaleY = ScaleY;
    }

private:

    float x, y;

    float width, height;

    float rotationX, rotationY;

    float scaleX, ScaleY;
};
#endif // defined(__SDL_DisplayList_DisplayObject__)