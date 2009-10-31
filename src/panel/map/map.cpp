#include "map.hpp"

void MapPanel::draw() {
  Panel::draw();
  Video::perspectivize(this->area);
}

