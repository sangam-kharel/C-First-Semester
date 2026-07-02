#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    int x = 300, y = 250;   // center point

    // Draw 10 concentric circles
    for (int i = 1; i <= 10; i++) {

        setcolor(i);        // different color each time
        circle(x, y, i * 15);
    }

    getch();
    closegraph();

    return 0;
}
