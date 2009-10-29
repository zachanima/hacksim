#include "image.hpp"

Image::Image(std::string filename) {
  int format;
  SDL_Surface* image = IMG_Load(filename.c_str());

  if (image == 0) {
    std::cerr << filename << ": file error or file not found." << std::endl;
    exit(1);
  }

  this->w = image->w;
  this->h = image->h;

  format = (image->format->Amask ? GL_RGBA : GL_RGB);

  load(format, static_cast<unsigned char*>(image->pixels));
  
  SDL_FreeSurface(image);
}



void Image::load(int format, unsigned char* pixel) {
  glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
  
  glGenTextures(1, &this->texture);
  glBindTexture(GL_TEXTURE_2D, this->texture);
  
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
  glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);

  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  
  gluBuild2DMipmaps(GL_TEXTURE_2D, format, this->w, this->h, format, GL_UNSIGNED_BYTE, pixel);
}

