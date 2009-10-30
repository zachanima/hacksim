#ifndef MAP_PANEL_HPP
#define MAP_PANEL_HPP

#include "../panel.hpp"

class MapPanel: public Panel {
  public:
    MapPanel(SDL_Rect area, Font* font): Panel(area, font) { }
    void draw();

  private:
};

#endif // MAP_PANEL_HPP

