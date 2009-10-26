#include "game.hpp"

std::vector<Panel*> Game::panels;



void Game::initialize(std::string title) {
  Video::initialize(title);

  Game::load();
}



void Game::loop() {
  SDL_Event event;
  SDL_PollEvent(&event);

  while (SDLK_ESCAPE != event.key.keysym.sym) {
    Game::update();

    Video::update();

    Game::draw();

    SDL_PollEvent(&event);
  }

  exit(0);
}

