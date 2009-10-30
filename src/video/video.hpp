#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

typedef struct {
  float x;
  float y;
  float w;
  float h;
} Rectf;

class Video {
  public:
    static void initialize(std::string);
    static void update();

    static void drawRectangle(SDL_Rect);
    static void drawRectangle(SDL_Rect, Rectf);

    friend class Game;

  private:
    static unsigned int width;
    static unsigned int height;
};

#endif // VIDEO_HPP

