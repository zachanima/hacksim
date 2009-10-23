#include "game.hpp"

void Game::initialize() {
  Video::initialize(800, 480, "hacksim");

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

