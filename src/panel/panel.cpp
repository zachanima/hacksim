#include "panel.hpp"

Panel::Panel(SDL_Rect area, Font* font) {
  this->area = area;
  this->font = font;
}



void Panel::draw() {
  glColor3f(0.25f, 0.25f, 0.25f);
  Video::drawRectangle(this->area);
}

