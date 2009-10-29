#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

class Video {
  public:
    static void initialize(std::string);
    static void update();

    static void drawRectangle(SDL_Rect area);

  private:
    static unsigned int width;
    static unsigned int height;
};

#endif // VIDEO_HPP

