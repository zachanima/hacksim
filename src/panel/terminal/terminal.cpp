#include "terminal.hpp"

void TerminalPanel::draw() {
  int x = 0;
  int y = 0;
  this->buffer = "Hello, world!\n";
  for (int i = 0; i < 100; i++) {
    this->buffer += ' ';
  }

  glBegin(GL_QUADS);
    glColor3f(0.25f, 0.25f, 0.25f);
    glVertex2s(this->x1, this->y1);
    glVertex2s(this->x2, this->y1);
    glVertex2s(this->x2, this->y2);
    glVertex2s(this->x1, this->y2);
    glColor3f(1.0f, 1.0f, 1.0f);
  BOOST_FOREACH(char c, this->buffer) {
    // relposition * (dimension + spacing) + dimension + absposition + padding
    glVertex2s(x * 6 + 0 + this->x1 + 1, y * 8 + 0 + this->y1 + 1);
    glVertex2s(x * 6 + 5 + this->x1 + 1, y * 8 + 0 + this->y1 + 1);
    glVertex2s(x * 6 + 5 + this->x1 + 1, y * 8 + 7 + this->y1 + 1);
    glVertex2s(x * 6 + 0 + this->x1 + 1, y * 8 + 7 + this->y1 + 1);
    if (x++ * 6 + 5 + this->x1 + 1 >= this->width() || c == '\n') {
      x = 0;
      y++;
    }
  }
  glEnd();
}

