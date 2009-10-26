#include "game.hpp"

void Game::initialize(unsigned int width, unsigned int height, std::string title) {
  Video::initialize(width, height, title);

  load();
}



void Game::loop() {
  SDL_Event event;
  SDL_PollEvent(&event);

  while (SDLK_ESCAPE != event.key.keysym.sym) {
    update();

    Video::update();

    draw();

    SDL_PollEvent(&event);
  }

  exit(0);
}

