#include "panel.hpp"

Panel::Panel(SDL_Rect area) {
  this->area = area;
}



void Panel::draw() {
  glColor3f(0.25f, 0.25f, 0.25f);
  glBegin(GL_QUADS);
    glVertex2s(this->area.x               , this->area.y);
    glVertex2s(this->area.x + this->area.w, this->area.y);
    glVertex2s(this->area.x + this->area.w, this->area.y + this->area.h);
    glVertex2s(this->area.x               , this->area.y + this->area.h);
  glEnd();
}

