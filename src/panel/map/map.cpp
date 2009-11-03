#include "map.hpp"

void MapPanel::load() {
  std::ifstream worldmap("worldmap");

  glNewList(this->coastlines, GL_COMPILE);
  glBegin(GL_LINE_STRIP);
  while (worldmap.good()) {
    if (worldmap.peek() == '#') {
      worldmap.ignore(256, '\n');
      glEnd();
      glBegin(GL_LINE_STRIP);

    } else {
      const static float RAD_TO_DEG = 3.14159f * 2.0f / 360.0f;
      boost::array<float, 2> point;
      worldmap >> point[0] >> point[1];
      worldmap.ignore();
      glVertex3f(sin(RAD_TO_DEG * point[0]) * cos(RAD_TO_DEG * point[1]),
                 sin(RAD_TO_DEG * point[1]),
                 cos(RAD_TO_DEG * point[0]) * cos(RAD_TO_DEG * point[1]));
    }
  }
  glEnd();
  glEndList();
}



void MapPanel::draw() {
  Panel::draw();
  Video::perspectivize(this->area);

  glTranslatef(0.0f, 0.0f, -2.5f);
  glCallList(this->coastlines);
}

