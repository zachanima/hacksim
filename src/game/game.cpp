#include "game.hpp"

Font* Game::font;
std::vector<Panel*> Game::panels;



void Game::initialize(std::string title) {
  Video::initialize(title);

  SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY, SDL_DEFAULT_REPEAT_INTERVAL);
  Game::load();
}



void Game::loop() {
  SDL_Event event;
  SDL_PollEvent(&event);

  while (SDLK_ESCAPE != event.key.keysym.sym) {
    if (SDL_PollEvent(&event) && SDL_KEYDOWN == event.type) {
      Game::key(event.key.keysym);
    }

    Game::update();

    Video::update();

    Game::draw();
  }

  exit(0);
}

