#include "font.hpp"

void Font::draw(std::string string, SDL_Rect area) {
  int dx = 0;
  int dy = 0;

  glColor3f(0.75f, 0.75f, 0.75f);
  glBegin(GL_QUADS);
  BOOST_FOREACH(char c, string) {
    const SDL_Rect rectangle = { area.x + dx, area.y + dy, 5, 7 };
    Video::drawRectangle(rectangle);

    if (rectangle.x >= area.w || c == '\n') {
      dx = 0;
      dy += 7 + 1;
    } else {
      dx += 5 + 1;
    }
  }
  glEnd();
}

