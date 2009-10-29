#ifndef PANEL_HPP
#define PANEL_HPP

#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

class Panel {
  public:
    Panel(SDL_Rect);
    virtual void draw();

    int width();

  protected:
    SDL_Rect area;
};

#endif // PANEL_HPP

