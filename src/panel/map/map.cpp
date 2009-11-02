#include "map.hpp"

void MapPanel::load() {
  std::ifstream worldmap;
  worldmap.open("worldmap");

  while (worldmap.good()) {
    if (worldmap.peek() == '\n') {
      worldmap.ignore();

    } else if (worldmap.peek() == '#') {
      std::vector<boost::array<float, 2> > points;
      this->lines.push_back(points);
      worldmap.ignore(256, '\n');

    } else {
      boost::array<float, 2> point;
      worldmap >> point[0] >> point[1];
      this->lines[this->lines.size() - 1].push_back(point);
    }
  }
}



void MapPanel::draw() {
  Panel::draw();
  Video::perspectivize(this->area);
  glTranslatef(0, 0, -180.0f);

  for (size_t i = 0; i < this->lines.size(); i++) {
    glBegin(GL_LINE_LOOP);
    for (size_t j = 0; j < this->lines[i].size(); j++) {
      const boost::array<float, 2> point = this->lines[i][j];
      glVertex2f(point[0], point[1]);
    }
    glEnd();
  }
}

