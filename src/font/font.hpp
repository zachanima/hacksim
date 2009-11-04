#ifndef FONT_HPP
#define FONT_HPP

#include <sstream>
#include <string>
#include <vector>
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>
#include <SDL/SDL_image.h>
#include <boost/foreach.hpp>

#include "../image/image.hpp"
#include "../video/video.hpp"

enum FontColors {
  FONT_BLACK = 30,
  FONT_RED,
  FONT_GREEN,
  FONT_YELLOW,
  FONT_BLUE,
  FONT_MAGENTA,
  FONT_CYAN,
  FONT_WHITE
};

class Font {
  public:
    Font(std::string, int, int);
    void draw(std::string, SDL_Rect);

    static bool isPrintable(unsigned char);

  private:
    static void setColor(int);

    unsigned int w;
    unsigned int h;
    unsigned int texture;
    unsigned int list;
};

#endif // FONT_HPP

