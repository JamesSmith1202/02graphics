#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);

  //octant 2 test
  draw_line(250, 250, 300, 499, s, c);
  
  //octant 1 test
  draw_line(250, 250, 499, 300, s, c);

  //octant 8 test
  draw_line(250, 250, 499, 200, s, c);

  //octant 7 test
  draw_line(250, 250, 300, 0, s, c);


  display(s);
  save_extension(s, "lines.png");
}
