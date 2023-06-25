/*  C Program to Draw Circle using Bresenham’s Circle Algorithm  */

#include <stdio.h>
#include <dos.h>
#include <graphics.h>
void plotPoints(int cx, int cy, int x, int y)
{
    putpixel(cx+x, cy+y, RED);
    putpixel(cx-x, cy+y, RED);
    putpixel(cx+x, cy-y, RED);
    putpixel(cx-x, cy-y, RED);
    putpixel(cx+y, cy+x, RED);
    putpixel(cx-y, cy+x, RED);
    putpixel(cx+y, cy-x, RED);
    putpixel(cx-y, cy-x, RED);
}
int main()
{
    int gdrive=DETECT, gmode;
    int midx, midy, radius=5;
    initgraph(&gdrive, &gmode, "C:\\TC\\bg i");
    midx = getmaxx()/2;
    midx = getmaxx()/2;
    circle(midx, midy, radius);
    getch();
    closegraph();
}
