#include "game.hpp"

void Game::load() {
  const int FONT_WIDTH     = 5;
  const int FONT_HEIGHT    = 9;
  const int LETTER_SPACING = 1;
  const int MARGIN         = 3;
  const int PADDING        = 1;
  const int COLS           = 80;
  const float MAP_RATIO    = 16.0f / 9.0f;

  int LEFT_W  = (FONT_WIDTH + LETTER_SPACING) * COLS + PADDING + PADDING;
  int RIGHT_W = Video::area.w - (LEFT_W + MARGIN + MARGIN + MARGIN);

  // Make right panels grow until as wide as left panel is initially.
  // After this, make left panel grow to fill the rest of the screen.
  if (RIGHT_W > LEFT_W) {
    RIGHT_W = LEFT_W;
    LEFT_W = Video::area.w - (RIGHT_W + MARGIN + MARGIN + MARGIN);
  }

  const int LEFT_H = Video::area.h - (MARGIN + MARGIN);
  const int MAP_H  = static_cast<int>(RIGHT_W / MAP_RATIO);
  const int COM_H  = Video::area.h - (MAP_H + MARGIN + MARGIN + MARGIN);

  SDL_Rect area[] = {
    { MARGIN                  , MARGIN                 , LEFT_W , LEFT_H },
    { LEFT_W + MARGIN + MARGIN, MARGIN                 , RIGHT_W, MAP_H  },
    { LEFT_W + MARGIN + MARGIN, MAP_H + MARGIN + MARGIN, RIGHT_W, COM_H  }
  };

  Game::font = new Font("font.png", FONT_WIDTH, FONT_HEIGHT);

  Game::panels.push_back(new TerminalPanel(area[0], font));
  Game::panels.push_back(new Panel(area[1], font));
  Game::panels.push_back(new Panel(area[2], font));
}

