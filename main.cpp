//
// Created by Linus Gasser on 23.11.22.
//

// This doesn't work - how can I include 'display.h' here?
#include <prg1f-io/display.h>

int main(){
  Display display(Display::Colors::PINK);

  Display::showText("Test", Display::Colors::GREEN);

  return 0;
}