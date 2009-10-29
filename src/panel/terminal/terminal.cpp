#include "terminal.hpp"

void TerminalPanel::draw() {
  this->buffer = "Hello, world!\n";
  for (int i = 0; i < 100; i++) {
    this->buffer += ' ';
  }

  // Draw background.
  glColor3f(0.25f, 0.25f, 0.25f);
  glBegin(GL_QUADS);
    glVertex2s(this->area.x               , this->area.y);
    glVertex2s(this->area.x + this->area.w, this->area.y);
    glVertex2s(this->area.x + this->area.w, this->area.y + this->area.h);
    glVertex2s(this->area.x               , this->area.y + this->area.h);
  glEnd();
}

