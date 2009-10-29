#include "font.hpp"

Font::Font(std::string filename) {
  Image* image = new Image(filename);
  this->w = image->w / 16;
  this->h = image->h / 16;
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
  const unsigned int LINE_HEIGHT = 2;
  int dx = 0;
  int dy = 0;

  glPushAttrib(GL_COLOR_BUFFER_BIT | GL_CURRENT_BIT | GL_ENABLE_BIT);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  glEnable(GL_TEXTURE_2D);
  glEnable(GL_BLEND);
  glBindTexture(GL_TEXTURE_2D, this->texture);

  glBegin(GL_QUADS);
  BOOST_FOREACH(unsigned char c, string) {
    const SDL_Rect rectangle = { area.x + dx, area.y + dy, this->w, this->h };

    glPushMatrix();
    glTranslatef(rectangle.x, rectangle.y, 0.0f);
    glCallList(this->list + c);
    glPopMatrix();

    if (rectangle.x + this->w + LETTER_SPACING >= area.w || c == '\n') {
      dx = 0;
      dy += this->h + LINE_HEIGHT;
    } else {
      dx += this->w + LETTER_SPACING;
    }
  }
  glEnd();

  glPopAttrib();
}

