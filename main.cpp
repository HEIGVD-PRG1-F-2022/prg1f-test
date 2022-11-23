//
// Created by Linus Gasser on 23.11.22.
//

#include <prg1f-io/display.h>

int main(){
  Display display(Display::Colors::PINK);

  Display::showText("Test", Display::Colors::GREEN);

  return 0;
}