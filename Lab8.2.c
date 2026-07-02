#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, RED);
    rectangle(100, 100, 200, 200);   // square
    floodfill(150, 150, WHITE);
//Circle
    setcolor(WHITE);
    setfillstyle(HATCH_FILL, BLUE);
    circle(350, 150, 50);
    floodfill(350, 150, WHITE);
    getch();
    closegraph();
    return 0;
}
