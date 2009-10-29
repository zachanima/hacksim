#ifndef GAME_HPP
#define GAME_HPP

#include <vector>

#include "../video/video.hpp"
#include "../font/font.hpp"
#include "../panel/panel.hpp"
#include "../panel/terminal/terminal.hpp"

class Game {
  public:
    static void initialize(std::string);
    static void loop();

    static void load();
    static void update();
    static void draw();

  private:
    static std::vector<Font*> fonts;
    static std::vector<Panel*> panels;
};

#endif // GAME_HPP

