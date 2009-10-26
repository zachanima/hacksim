#include "game.hpp"

void Game::load() {
  // 80x60 @ 5x7
  Game::panels.push_back(new Panel(3             , 3      , 6 * 80 + 3, 480 - 3));

  // 52x22 @ 5x7
  Game::panels.push_back(new Panel(6 * 80 + 3 + 2, 3      , 800 - 3   , 176));

  // 52x37.4 @ 5x7
  Game::panels.push_back(new Panel(6 * 80 + 3 + 2, 176 + 2, 800 - 3   , 480 - 3));
}

