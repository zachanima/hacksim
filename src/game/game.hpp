#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <boost/foreach.hpp>

#include "../video/video.hpp"
#include "../panel/panel.hpp"

class Game {
  public:
    static void initialize();
    static void loop();

    static void load();
    static void update();
    static void draw();

  private:
    static std::vector<Panel*> panels;
};

#endif // GAME_HPP

