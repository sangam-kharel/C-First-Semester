#include<graphics.h>
#include<conio.h>
void main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "c:\\turbo3\\bgi");
    line(10, 20, 100, 20);
    getch();
    closegraph();
}