#ifndef TERMINAL_PANEL_HPP
#define TERMINAL_PANEL_HPP

#include <string>

#include "../panel.hpp"

class TerminalPanel: public Panel {
  public:
    TerminalPanel(SDL_Rect area): Panel(area) { }
    void draw();

  private:
    std::string buffer;
    int cursor;
};

#endif // TERMINAL_PANEL_HPP

