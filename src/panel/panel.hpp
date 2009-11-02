#ifndef PANEL_HPP
#define PANEL_HPP

#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

#include "../font/font.hpp"
#include "../video/video.hpp"

class Panel {
  public:
    Panel(SDL_Rect, Font*);
    virtual void load();
    virtual void draw();

    int width();

  protected:
    SDL_Rect area;
    Font* font;
};

#endif // PANEL_HPP

