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
#include "Image.h"
#ifndef __SDL_DisplayList_MovieClip__
#define __SDL_DisplayList_MovieClip__

class MovieClip : public Image
{
	private:
		SDL_Texture *m_texture;
    std::vector<SDL_Texture*> m_textures;
		SDL_Rect*   m_srcRect;
		SDL_Rect*   m_dstRect;

    std::vector<float> m_durations;
    std::vector<float> m_startTimes;

    int m_fps;
    unsigned int m_currentFrame;

    float m_defaultFrameDuration;
    float m_currentTime;

    bool  m_loop;
    bool  m_playing;
  private:
    void         init(std::vector<SDL_Texture*> textures, float fps = 24);
	public:
    int          getFps() const{return m_fps;}
    void         setFps(int fps){m_fps = fps;}

    unsigned int getCurrentFrame() const{return m_currentFrame;}
    void         setCurrentFrame(unsigned int frame){m_currentFrame = frame;}

    MovieClip(std::vector<SDL_Texture*> textures, float fps = 24);
		~MovieClip();/// Cleanup here

    void         addFrame(SDL_Texture* texture, float duration = -1);
    void         addFrameAt(int frameID, SDL_Texture* texture, float duration = -1);
    void         removeFrameAt(int frameID);
    SDL_Texture* getFrameTexture() const;
    void         setFrameTexture(int frameID, SDL_Texture* texture);
    float        getFrameDuration(int frameID) const;
    void         setFrameDuration(int frameID, float duration);
    void         play();
    void         pause();
    void         stop();
};

#endif // defined(__SDL_DisplayList_MovieClip__)
