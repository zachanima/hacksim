#include "../video.hpp"

void Video::drawRectangle(SDL_Rect area) {
  glBegin(GL_QUADS);
    glVertex2i(area.x         , area.y         );
    glVertex2i(area.x         , area.y + area.h);
    glVertex2i(area.x + area.w, area.y + area.h);
    glVertex2i(area.x + area.w, area.y         );
  glEnd();
}

