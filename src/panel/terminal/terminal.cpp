#include "terminal.hpp"

void TerminalPanel::draw() {
  this->buffer = "Hello, world!\n$ ";

  // Draw background.
  glColor3f(0.25f, 0.25f, 0.25f);
  Video::drawRectangle(this->area);

  // Draw buffer text.
  glColor3f(1.0f, 1.0f, 1.0f);
  this->font->draw(this->buffer, this->area);
}

