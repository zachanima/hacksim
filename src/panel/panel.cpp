#include "panel.hpp"

Panel::Panel(int x1, int y1, int x2, int y2) {
  this->x1 = x1;
  this->y1 = y1;
  this->x2 = x2;
  this->y2 = y2;
}



void Panel::draw() {
  glColor3f(0.5f, 0.5f, 0.5f);
  glBegin(GL_QUADS);
    glVertex2s(this->x1, this->y1);
    glVertex2s(this->x2, this->y1);
    glVertex2s(this->x2, this->y2);
    glVertex2s(this->x1, this->y2);
  glEnd();
}



int Panel::width() {
  return x2 - x1;
}

