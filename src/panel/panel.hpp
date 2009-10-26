#ifndef PANEL_HPP
#define PANEL_HPP

#include <SDL/SDL_opengl.h>

class Panel {
  public:
    Panel(int, int, int, int);

    void draw();

  protected:
    int x1;
    int y1;
    int x2;
    int y2;
};

#endif // PANEL_HPP
