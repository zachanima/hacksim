#include "map.hpp"

void MapPanel::load() {
}



void MapPanel::draw() {
  Panel::draw();
  Video::perspectivize(this->area);
}

