#include "video.hpp"

SDL_Rect Video::area = { 0, 0, 800, 480 };

void Video::initialize(std::string title) {
  const int BPP = 16;
  const int FLAGS =
    SDL_OPENGL |
    SDL_GL_DOUBLEBUFFER |
    SDL_HWPALETTE |
    SDL_HWACCEL;

  SDL_Init(SDL_INIT_VIDEO);
  atexit(SDL_Quit);

  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
  SDL_WM_SetCaption(title.c_str(), 0);
  SDL_SetVideoMode(Video::area.w, Video::area.h, BPP, FLAGS);

  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}



void Video::update() {
  glFlush();
  SDL_GL_SwapBuffers();

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

  Video::orthographicalize(Video::area);
}



void Video::orthographicalize(SDL_Rect area) {
  glViewport(area.x, Video::area.h - (area.h + area.y), area.w, area.h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();

  gluOrtho2D(0, area.w, area.h, 0);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}



void Video::perspectivize(SDL_Rect area) {
  const float FOVY   = 45.0f;
  const float ASPECT = static_cast<float>(area.w) / area.h;
  const float ZNEAR  = 0.1f;
  const float ZFAR   = 500.0f;

  glViewport(area.x, Video::area.h - (area.h + area.y), area.w, area.h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();

  gluPerspective(FOVY, ASPECT, ZNEAR, ZFAR);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}
