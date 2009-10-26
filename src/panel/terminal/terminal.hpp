#ifndef TERMINAL_PANEL_HPP
#define TERMINAL_PANEL_HPP

#include <string>
#include <boost/foreach.hpp>

#include "../panel.hpp"

class TerminalPanel: public Panel {
  public:
    TerminalPanel(int x1, int y1, int x2, int y2): Panel(x1, y1, x2, y2) { }
    void draw();

  private:
    std::string buffer;
    int cursor;
};

#endif // TERMINAL_PANEL_HPP

