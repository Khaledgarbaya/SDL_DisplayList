//
//  MovieClip.h
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
#include "DisplayObjectContainer.h"
#ifndef __SDL_DisplayList_MovieClip__
#define __SDL_DisplayList_MovieClip__

class Sprite : public DisplayObjectContainer
{
	private:
		SDL_Texture *m_texture;
    std::vector<SDL_Texture*> m_textures;
    int m_fps;
		std::string m_textureName;
		SDL_Rect*   m_srcRect;
		SDL_Rect*   m_dstRect;
	public:
    MovieClip(std::vector<SDL_Texture*> textures);
		~MovieClip();/// Cleanup here
};

#endif // defined(__SDL_DisplayList_MovieClip__)
