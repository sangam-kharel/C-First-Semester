#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    int x, y, r;
    // Take input from user
    printf("Enter x-coordinate of center: ");
    scanf("%d", &x);
    printf("Enter y-coordinate of center: ");
    scanf("%d", &y);
    printf("Enter radius: ");
    scanf("%d", &r);
    initgraph(&gd, &gm, "");
    circle(x, y, r);
    getch();
    closegraph();
   return 0;
}
