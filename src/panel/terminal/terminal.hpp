#ifndef TERMINAL_PANEL_HPP
#define TERMINAL_PANEL_HPP

#include <string>

#include "../panel.hpp"

class TerminalPanel: public Panel {
  public:
    TerminalPanel(SDL_Rect area, Font* font): Panel(area, font) { }
    void load();
    void key(SDL_keysym);
    void draw();

  private:
    std::string buffer;
    std::string command;
    int cursor;
};

#endif // TERMINAL_PANEL_HPP

