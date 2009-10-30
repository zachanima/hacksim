#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>

#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

class Video {
  public:
    static void initialize(int, int, std::string);
    static void update();

    static void orthographicalize(SDL_Rect);
    static void perspectivize(SDL_Rect);

    static void drawRectangle(SDL_Rect);

  private:
    static SDL_Rect area;
};

#endif // VIDEO_HPP

