#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics
    initgraph(&gd, &gm, NULL);

    // Draw rectangle
    rectangle(100, 100, 500, 300);

    // Display text
    outtextxy(150, 200, "Tribhuvan University");

    // Wait for user input
    getch();

    // Close graphics
    closegraph();

    return 0;
}
