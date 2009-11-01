#include "terminal.hpp"

void TerminalPanel::key(SDL_keysym key) {
  switch (key.sym) {
    case SDLK_BACKSPACE:
      if (!this->command.empty()) {
        this->command.erase(this->command.end() - 1);
      }
      break;

    case SDLK_h: // CTRL + H == backspace.
      if ((key.mod & KMOD_CTRL) && !this->command.empty()) {
        this->command.erase(this->command.end() - 1);
        break;
      }
      // Fallthrough.

    default:
      this->command += key.unicode;
      break;
  }
}



void TerminalPanel::draw() {
  Panel::draw();
  const int PADDING = 1;

  // Draw text.
  SDL_Rect padded = { PADDING, PADDING, this->area.w - (PADDING + PADDING), this->area.h - (PADDING + PADDING) };

  glColor3f(1.0f, 1.0f, 1.0f);
  this->font->draw(this->buffer + this->command + "_", padded);
}

