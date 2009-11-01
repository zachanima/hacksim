#include "panel.hpp"

Panel::Panel(SDL_Rect area, Font* font) {
  this->area = area;
  this->font = font;
}



void Panel::draw() {
  Video::orthographicalize(this->area);

  SDL_Rect rectangle = { 0, 0, this->area.w, this->area.h };

  glPushAttrib(GL_COLOR_BUFFER_BIT | GL_CURRENT_BIT);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  glEnable(GL_BLEND);
  glColor4f(0.0f, 0.0f, 0.0f, 0.9f);
  Video::drawRectangle(rectangle);
  glPopAttrib();
}

