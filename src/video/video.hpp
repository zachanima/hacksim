#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>

#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

class Video {
  public:
    static void initialize(std::string);
    static void initialize(unsigned int, unsigned int, std::string);
    static void update();

    static unsigned int getWidth();
    static unsigned int setWidth(unsigned int);
    static unsigned int getHeight();
    static unsigned int setHeight(unsigned int);

  private:
    static unsigned int width;
    static unsigned int height;
};

#endif // VIDEO_HPP

