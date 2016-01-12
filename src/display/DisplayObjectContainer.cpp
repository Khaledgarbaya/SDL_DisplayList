//
//  DisplayObjectContainer.cpp
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
#include "DisplayObjectContainer.h"
DisplayObjectContainer::DisplayObjectContainer()
{

}
DisplayObjectContainer::~DisplayObjectContainer()
{
	for (std::vector< DisplayObject* >::iterator it = m_children.begin(); it != m_children.end(); ++it)
	{
		delete (*it);
	}
	m_children.clear();
}

void DisplayObjectContainer::addChild(DisplayObject *pChild)
{
	/// check if the pChild is Already Added to the stage
	auto it = std::find(m_children.begin(), m_children.end(), pChild);
	if (it == m_children.end())
	{
		/// we don't have it yet, we add it as a child
		m_children.push_back(pChild);
	}
	else
	{
		/// otherwise we bring it to the front
		moveToFront(m_children, it);
	}
	/// setting the parent to this
	it->parent = this;
}
void DisplayObjectContainer::addChildAt(DisplayObject *child, int atIndex)
{
	/// TODO
}
void DisplayObjectContainer::removeChild(const DisplayObject *child)
{
	auto it = std::find(m_children.begin(), m_children.end(), child);
	if (it != m_children.end())
	{
		it->parent = nullptr;
		m_children.erase(it);
	}
}
void DisplayObjectContainer::removeChildAt(int atIndex)
{
	if (atIndex < m_children.size())
	{
		it->parent = nullptr;
		m_children.erase(m_children.begin() + atIndex);
	}
}
void DisplayObjectContainer::draw(SDL_Renderer* pRenderer)
{
	/// loop through children pointers and call draw
	for (auto it = m_children.begin(); it != m_children.end(); ++it)
	{
		it->draw(pRenderer);
	}
}
void DisplayObjectContainer::update()
{
	/// loop through children pointers and call update
	for (auto it = m_children.begin(); it != m_children.end(); ++it)
	{
		it->update();
	}
}

/// Util
void DisplayObjectContainer::moveToFront(std::vector<DisplayObject*>& list, std::vector<DisplayObject*>::iterator element)
{
	DisplayObject* tmp(*element);
	std::copy_backward(list.begin(), std::prev(element), element);
	*list.begin() = tmp;
}
