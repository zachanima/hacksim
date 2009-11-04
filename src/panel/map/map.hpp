#ifndef MAP_PANEL_HPP
#define MAP_PANEL_HPP

#include <cmath>
#include <fstream>
#include <vector>
#include <boost/array.hpp>

#include "../panel.hpp"

class MapPanel: public Panel {
  public:
    MapPanel(SDL_Rect area, Font* font): Panel(area, font) { }
    void load();
    void draw();

  private:
    unsigned int coastlines;
};

#endif // MAP_PANEL_HPP

