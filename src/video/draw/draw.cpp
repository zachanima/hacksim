#include "../video.hpp"

void Video::drawRectangle(SDL_Rect area) {
  Rectf texture = { 0.0f, 0.0f, 1.0f, 1.0f };
  drawRectangle(area, texture);
}



void Video::drawRectangle(SDL_Rect area, Rectf texture) {
  glBegin(GL_QUADS);
    glTexCoord2f(texture.x, texture.y);
    glVertex2i(area.x, area.y);

    glTexCoord2f(texture.x, texture.y + texture.h);
    glVertex2i(area.x, area.y + area.h);

    glTexCoord2f(texture.x + texture.w, texture.y + texture.h);
    glVertex2i(area.x + area.w, area.y + area.h);

    glTexCoord2f(texture.x + texture.w, texture.y);
    glVertex2i(area.x + area.w, area.y);
  glEnd();
}

