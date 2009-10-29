#include "game.hpp"

void Game::load() {
  SDL_Rect area[] = {
    { 3, 3, 6 * 80, 480 - 3 - 3 },
    { 6 * 80 + 3 + 2, 3, 800 - 6 * 80 - 3 - 3 - 2, 176 },
    { 6 * 80 + 3 + 2, 176 + 3 + 2, 800 - 6 * 80 - 3 - 3 - 2, 480 - 176 - 3 - 3 - 2 }
  };

  Game::fonts.push_back(new Font("font.png"));

  // 80x60 @ 5x7
  Game::panels.push_back(new TerminalPanel(area[0], fonts[0]));

  // 52x22 @ 5x7
  Game::panels.push_back(new Panel(area[1], fonts[0]));

  // 52x37.4 @ 5x7
  Game::panels.push_back(new Panel(area[2], fonts[0]));
}

