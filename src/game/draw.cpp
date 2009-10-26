#include "game.hpp"

void Game::draw() {
  BOOST_FOREACH(Panel* panel, Game::panels) {
    panel->draw();
  }
}

