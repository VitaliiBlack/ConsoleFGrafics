#ifndef CONSOLE_H
#define CONSOLE_H

#include <windows.h>

class Console
{
  HANDLE hOut_ = GetStdHandle(STD_OUTPUT_HANDLE);
  HWND hwnd_ = GetConsoleWindow();
  int width_ = 200;
  int height_ = 200;
  int fontSize = 5;
  //setup position & size of cmd console screen
  void recalcSize(bool noMove);

public:

  Console();
  Console(int width, int height);
  Console(int width, int height, short fontSize);


  int getWidth() const;
  int getHeight() const;
  void setWidht(int);
  void setHight(int);
  // set console setups msdn half
  void setFontSize(short fontSize);
  short getFontSize();
  void resize(int width, int height);

  //half msdn, draw 
  void draw(const CHAR_INFO* charInfo, int width, int height);
};

#endif // CONSOLE_H