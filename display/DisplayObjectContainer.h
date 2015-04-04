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
#include <vector>
#include <algorithm>
#include "DisplayObject.h"
#ifndef __SDL_DisplayList_DisplayObjectContainer__
#define __SDL_DisplayList_DisplayObjectContainer__

class DisplayObjectContainer : public DisplayObject
{
public:
	DisplayObjectContainer();
	~DisplayObjectContainer();
	void addChild(DisplayObject *child);
	void addChildAt(DisplayObject *child, int atIndex);

	void removeChild(const DisplayObject *child);
	void removeChildAt(int atIndex);

	virtual void draw();
	virtual void update();

	DisplayObject & getChildAt(int atIndex) const;
protected:
	void moveToFront(std::vector<DisplayObject*>& list, std::vector<DisplayObject*>::iterator element);
	std::vector<DisplayObject*> m_children;
};

#endif // defined(__SDL_DisplayList_DisplayObjectContainer__)
