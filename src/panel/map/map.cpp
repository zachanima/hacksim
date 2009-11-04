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
  static GLUquadric* quadric = gluNewQuadric();
  Panel::draw();
  Video::perspectivize(this->area);

  glEnable(GL_DEPTH_TEST);
  glTranslatef(0.0f, 0.0f, -2.5f);
  glColor3f(0.0f, 0.0f, 0.0f);
  gluSphere(quadric, 1.0f, 36, 36);
  glColor3f(1.0f, 1.0f, 1.0f);
  glCallList(this->coastlines);
  glDisable(GL_DEPTH_TEST);
}

