#include "main.hpp"

int main(int argc, char *argv[]) {
  Game::initialize(800, 480, "hacksim");
  Game::loop();

  return 0;
}

