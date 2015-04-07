//
//  MovieClip.cpp
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
#include "MovieClip.h"

MovieClip::MovieClip(std::vector<SDL_Texture*> textures, int fps = 24)
{
  m_textures = textures;
  m_fps = fps;
}
MovieClip::~MovieClip()
{
  /// in addition to childrens we need to clear the textures.
  for (std::vector<SDL_Texture* >::iterator it = m_textures.begin(); it != m_textures.end(); ++it)
	{
		delete (*it);
	}
  m_textures.clear();
}
MovieClip::update()
{
    /// TODO check delta time and update based on the fps provided
    /// TODO update m_srcRect and m_destRect based on the current texture

    /// update x and y based on the parent
}
