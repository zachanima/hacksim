#include "font.hpp"

void Font::draw(std::string string, SDL_Rect area) {
  int dx = 0;
  int dy = 0;

  glColor3f(0.75f, 0.75f, 0.75f);
  glBegin(GL_QUADS);
  BOOST_FOREACH(char c, string) {
    const int x = area.x + dx * 6;
    const int y = area.y + dy * 8;

    glVertex2s(x    , y    );
    glVertex2s(x + 5, y    );
    glVertex2s(x + 5, y + 7);
    glVertex2s(x    , y + 7);

    if (x >= area.w || c == '\n') {
      dx = 0;
      dy++;
    } else {
      dx++;
    }
  }
  glEnd();
}

