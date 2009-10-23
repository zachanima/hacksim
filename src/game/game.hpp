#ifndef GAME_HPP
#define GAME_HPP

#include "../video/video.hpp"

class Game {
  public:
    static void initialize();
    static void loop();

    static void load();
    static void update();
    static void draw();
};

#endif // GAME_HPP
