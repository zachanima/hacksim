#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>

#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

class Video {
  public:
    static void initialize(unsigned int, unsigned int, std::string);
    static void update();
};

#endif // VIDEO_HPP

