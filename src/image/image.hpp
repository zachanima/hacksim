#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <iostream>
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>
#include <SDL/SDL_image.h>

class Image {
  public:
    Image(std::string);
    void load(int, unsigned char *);

    unsigned int w;
    unsigned int h;
    unsigned int texture;
};

#endif // IMAGE_H
