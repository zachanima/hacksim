#ifndef FONT_HPP
#define FONT_HPP

#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>
#include <boost/foreach.hpp>

class Font {
  public:
    void draw(std::string, SDL_Rect);

  private:
    unsigned int width;
    unsigned int height;
};

#endif // FONT_HPP

