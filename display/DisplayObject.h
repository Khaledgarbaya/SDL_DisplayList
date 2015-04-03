//
//  DisplayObject.h
//  author Khaled Garbaya http://khaledgarbaya.net
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
#include <string>
#include <SDL.h>
#ifndef __SDL_DisplayList_DisplayObject__
#define __SDL_DisplayList_DisplayObject__

class  DisplayObject
{
    public:
		DisplayObject();
		virtual ~DisplayObject() = 0;
        float getX() const
        {
			return m_x;
        }

        void setX(float x)
        {
			m_x = x;
        }

        float getY() const
        {
			return m_y;
        }

        void setY(float y)
        {
			m_y = y;
        }

        float getWidth() const
        {
			return m_width;
        }

        void setWidth(float width)
        {
			m_width = width;
        }

        float getHeight() const
        {
			return m_height;
        }

        void setHeight(float height)
        {
			m_height = height;
        }

        float getRotation() const
        {
			return m_rotation;
        }

        void setRotation(float rotationX)
        {
			m_rotation = rotationX;
        }

        float getScaleX() const
        {
			return m_scaleX;
        }

        void setScaleX(float scaleX)
        {
            m_scaleX = scaleX;
        }

        float getScaleY() const
        {
			return m_scaleY;
        }

        void setScaleY(float ScaleY)
        {
			DisplayObject::m_scaleY = ScaleY;
        }
    protected:
		std::string m_name;

		float m_x, m_y;

		float m_width, m_height;

        float m_rotation;

		float m_scaleX, m_scaleY;

        virtual void draw(SDL_Renderer* pRenderer) = 0;
		virtual void update() = 0;
		SDL_Rect m_destRect;
};
#endif // defined(__SDL_DisplayList_DisplayObject__)
