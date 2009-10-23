#include "video.hpp"

void Video::initialize(unsigned int width, unsigned int height, std::string title) {
  const unsigned int bpp = 16;
  int flags = SDL_OPENGL | SDL_GL_DOUBLEBUFFER | SDL_HWPALETTE | SDL_HWACCEL;

  SDL_Init(SDL_INIT_VIDEO);
  atexit(SDL_Quit);

  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
  SDL_WM_SetCaption(title.c_str(), 0);
  SDL_SetVideoMode(width, height, bpp, flags);

  glViewport(0, 0, width, height);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  
  glOrtho(0, width, height, 0, -1, 1);
  
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  glFlush();
}



void Video::update() {
  glFlush();
  SDL_GL_SwapBuffers();

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

