#include "game.hpp"

void Game::key(SDL_keysym key) {
  panels[0]->key(key);
}

