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
#include "Image.h"
Image::Image(SDL_Texture *texture)
{
	m_texture = texture;
	m_srcRect.x = 0;
	m_srcRect.y = 0;
	m_srcRect.w = m_texture.w;
	m_srcRect.y = m_texture.h;

}
Image::~Image()
{
  /// destroy the texture
  if(!m_texture)
  {
    SDL_DestroyTexture(m_texture);
  }
}
void Image::draw(SDL_Renderer* pRenderer)
{
	SDL_RenderCopyEx(pRenderer, m_texture, m_srcRect, m_destRect, m_rotation, NULL, SDL_FLIP_NONE);
}
void Image::update()
{
	m_dstRect.x = m_x;
	m_dstRect.y = m_y;
	m_dstRect.w = m_width  * m_scaleX;
	m_dstRect.h = m_height * m_scaleY;
}
