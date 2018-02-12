#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 252;
  c.green = 233;
  c.blue = 166;

  clear_screen(s);

  //head
  draw_line(225, 450, 275, 450, s, c);
  draw_line(225, 450, 225, 400, s, c);
  draw_line(275, 450, 275, 400, s, c);
  draw_line(225, 400, 275, 400, s, c);
  draw_line(230, 440, 235, 440, s, c);
  draw_line(265, 440, 270, 440, s, c);
  draw_line( 235, 420, 265, 420, s, c);

  //hair
  c.red = 119;
  c.green = 94;
  c.blue = 0;
  draw_line(225, 450, 235, 460, s, c);
  draw_line(275, 450, 265, 460, s, c);
  draw_line(235, 460, 265, 460, s, c);

  //neck
  c.red = 252;
  c.green = 233;
  c.blue = 166;
  draw_line(235, 400, 245, 390, s, c);
  draw_line(265, 400, 255, 390, s, c);

  //shoulders
  draw_line(245, 390, 150, 390, s, c);
  draw_line(255, 390, 350, 390, s, c);
  draw_line(150, 390, 130, 380, s, c);
  draw_line(350, 390, 370, 380, s, c);

  //arms
  draw_line(130, 380, 120, 360, s, c);
  draw_line(370, 380, 380, 360, s, c);
  draw_line(120, 200, 120, 360, s, c);
  draw_line(380, 200, 380, 360, s, c);
  draw_line(160, 360, 170, 300, s, c);
  draw_line(340, 360, 330, 300, s, c);
  draw_line(160, 240, 170, 300, s, c);
  draw_line(340, 240, 330, 300, s, c);
  draw_line(160, 240, 150, 200, s, c);
  draw_line(340, 240, 350, 200, s, c);

  //hands
  draw_line(160, 200, 110, 200, s, c);
  draw_line(340, 200, 390, 200, s, c);
  draw_line(160, 200, 160, 170, s, c);
  draw_line(390, 200, 390, 170, s, c);
  draw_line(110, 170, 110, 200, s, c);
  draw_line(340, 200, 340, 170, s, c);
  draw_line(110, 170, 160, 170, s, c);
  draw_line(340, 170, 390, 170, s, c);

  //torso
  draw_line(280, 300, 330, 300, s, c);
  draw_line(170, 300, 220, 300, s, c);
  draw_line(280, 200, 310, 300, s, c);
  draw_line(190, 300, 220, 200, s, c);
  draw_line(280, 200, 220, 200, s, c);
  draw_line(250, 270, 250, 210, s, c);
  draw_line(240, 225, 260, 225, s, c);
  draw_line(240, 240, 260, 240, s, c);
  draw_line(240, 255, 260, 255, s, c);
  c.red = 252;
  c.green = 32;
  c.blue = 234;
  draw_line(180, 310, 185, 310, s, c);
  draw_line(320, 310, 315, 310, s, c);

  //legs
  c.red = 0;
  c.green = 85;
  c.blue = 255;
  draw_line(220, 200, 220, 50, s, c);
  draw_line(280, 200, 280, 50, s, c);
  draw_line(250, 180, 250, 50, s, c);

  c.red = 255;
  c.green = 0;
  c.blue = 0;
  draw_line(200, 50, 300, 50, s, c);
  draw_line(190, 20, 310, 20, s, c);
  draw_line(190, 20, 200, 50, s, c);
  draw_line(300, 50, 310, 20, s, c);
  draw_line(250, 20, 250, 50, s, c);

  display(s);
  save_extension(s, "lines.png");
}
