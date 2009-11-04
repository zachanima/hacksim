#include "font.hpp"

Font::Font(std::string filename, int w, int h) {
  Image* image = new Image(filename);
  this->w = w;
  this->h = h;
  this->texture = image->texture;
  delete(image);

  const SDL_Rect area = { 0, 0, this->w, this->h };
  this->list = glGenLists(256);
  for (size_t i = 0; i < 256; i++) {
    const Rectf texture = {
      (i % 16) / 16.0f,
      (i / 16) / 16.0f,
      1.0f / 16.0f,
      1.0f / 16.0f
    };

    glNewList(this->list + i, GL_COMPILE);
    Video::drawRectangle(area, texture);
    glEndList();
  }
}



void Font::draw(std::string string, SDL_Rect area) {
  const int LETTER_SPACING = 1;
  const unsigned int LINE_HEIGHT = 1;
  int dx = 0;
  int dy = 0;

  glPushAttrib(GL_COLOR_BUFFER_BIT | GL_CURRENT_BIT | GL_ENABLE_BIT);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  glEnable(GL_TEXTURE_2D);
  glEnable(GL_BLEND);
  glBindTexture(GL_TEXTURE_2D, this->texture);

  glBegin(GL_QUADS);
  BOOST_FOREACH(unsigned char c, string) {
    if (Font::isPrintable(c)) {
      const SDL_Rect rectangle = { area.x + dx, area.y + dy, this->w, this->h };

      glPushMatrix();
      glTranslatef(rectangle.x, rectangle.y, 0.0f);
      glCallList(this->list + c);
      glPopMatrix();

      dx += this->w + LETTER_SPACING;
    }
    if (dx >= area.w || c == '\n') {
      dx = 0;
      dy += this->h + LINE_HEIGHT;
    }
  }
  glEnd();

  glPopAttrib();
}



bool Font::isPrintable(unsigned char c) {
  return (c >= '\x20' && c <= '\x7E');
}

