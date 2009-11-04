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
  std::istringstream stream(string);
  while (stream.good()) {
    if (stream.peek() == '\x1b') {
      int fg;
      stream.ignore(2);
      stream >> fg;
      stream.ignore();
      Font::setColor(fg);

    } else {
      const unsigned char c = stream.get();

      glPushMatrix();
      glTranslatef(area.x + dx, area.y + dy, 0.0f);
      glCallList(this->list + c);
      glPopMatrix();

      dx += this->w + LETTER_SPACING;
      if (dx >= area.w || c == '\n') {
        dx = 0;
        dy += this->h + LINE_HEIGHT;
      }
    }

  }
  glEnd();

  glPopAttrib();
}



bool Font::isPrintable(unsigned char c) {
  return (c >= '\x20' && c <= '\x7E');
}



void Font::setColor(int color) {
  switch (color) {
    case FONT_BLACK:
      glColor3f(0.0f, 0.0f, 0.0f);
      break;

    case FONT_RED:
      glColor3f(1.0f, 0.5f, 0.5f);
      break;

    case FONT_GREEN:
      glColor3f(0.5f, 1.0f, 0.5f);
      break;

    case FONT_YELLOW:
      glColor3f(1.0f, 1.0f, 0.5f);
      break;

    case FONT_BLUE:
      glColor3f(0.5f, 0.5f, 1.5f);
      break;

    case FONT_MAGENTA:
      glColor3f(1.0f, 0.5f, 1.0f);
      break;

    case FONT_CYAN:
      glColor3f(5.0f, 1.0f, 1.0f);
      break;

    case FONT_WHITE:
      // Fallthrough.
    default:
      glColor3f(1.0f, 1.0f, 1.0f);
      break;
  }
}

