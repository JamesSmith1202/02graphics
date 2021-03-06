#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

void swap_coords(int * x0, int * y0, int * x1, int * y1){
    int tmpx = *x0;
    int tmpy = *y0;
    *x0 = *x1;
    *y0 = *y1;
    *x1 = tmpx;
    *y1 = tmpy;
}

//draws lines in octant 2
//since c is pass by value, use x0 and y0 as manipulatable variables
void draw_oct2(int x0, int y0, int x1, int y1, screen s, color c, int a, int b){
    int d = a + 2*b;
    while(y0 <= y1){
        plot(s, c, x0, y0);
        if(d < 0){
            x0++;
            d += 2*a;
        }
        y0++;
        d += 2*b;
    }
    printf("oct 2 end: %d %d\n", x0, y0);
}

//draws lines in octant 1
void draw_oct1(int x0, int y0, int x1, int y1, screen s, color c, int a, int b){
    int d = 2*a + b;
    while(x0 <= x1){
        plot(s, c, x0, y0);
        if(d > 0){
            y0++;
            d += 2*b;
        }
        x0++;
        d += 2*a;
    }
    printf("oct 1 end: %d %d\n", x0, y0);
}

//draws lines in octant 8
void draw_oct8(int x0, int y0, int x1, int y1, screen s, color c, int a, int b){
    int d = 2*a - b;
    while(x0 <= x1){
        plot(s, c, x0, y0);
        if(d < 0){
            y0--;
            d -= 2*b;
        }
        x0++;
        d += 2*a;
    }
    printf("oct 8 end: %d %d\n", x0, y0);
}

//draws lines in octant 7
void draw_oct7(int x0, int y0, int x1, int y1, screen s, color c, int a, int b){
    int d = a - 2*b;
    while(y0 >= y1){
        plot(s, c, x0, y0);
        if(d > 0){
            x0++;
            d += 2*a;
        }
        y0--;
        d -= 2*b;
    }
    printf("oct 7 end: %d %d\n", x0, y0);
}

void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
    if(x1 < x0){ //to maintain a 4 octant drawing system, we draw always from left to right
        swap_coords(&x0, &y0, &x1, &y1);
    }
    int a = y1 - y0;//a is delta y
    int b = x0 - x1;//b is -delta x
    if(a >= -1*b && a > 0){ //if the slope is within octant 2
        draw_oct2(x0, y0, x1, y1, s, c, a, b);
    }
    else if(a < -1*b && a >= 0){//if the slope is within octant 1
        draw_oct1(x0, y0, x1, y1, s, c, a, b);
    }
    else if(-1*a < -1*b && a < 0){//if the slope is within octant 8
        draw_oct8(x0, y0, x1, y1, s, c, a, b);
    }
    else{//if the slope is within octant 7
        draw_oct7(x0, y0, x1, y1, s, c, a, b);
    }
}
