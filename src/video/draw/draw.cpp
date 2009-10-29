#include "../video.hpp"

void Video::drawRectangle(SDL_Rect area) {
  glBegin(GL_QUADS);
    glTexCoord2s(0, 0); glVertex2i(area.x         , area.y         );
    glTexCoord2s(0, 1); glVertex2i(area.x         , area.y + area.h);
    glTexCoord2s(1, 1); glVertex2i(area.x + area.w, area.y + area.h);
    glTexCoord2s(1, 0); glVertex2i(area.x + area.w, area.y         );
  glEnd();
}

