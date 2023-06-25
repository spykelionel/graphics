/*  C Program to Draw Circle using Bresenham’s Circle Algorithm  */

//#include <stdio.h>
//#include <dos.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gdrive=DETECT, gmode;
    int radius=5;
    initgraph(&gdrive, &gmode, "");
    circle(200,100,150);
    getch();
    closegraph();
}
