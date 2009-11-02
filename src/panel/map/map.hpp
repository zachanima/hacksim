#ifndef MAP_PANEL_HPP
#define MAP_PANEL_HPP

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
    std::vector<std::vector<boost::array<float, 2> > > lines;
};

#endif // MAP_PANEL_HPP

