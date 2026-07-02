//3. Create a function int small(int a,int b) that finds the smaller number between two numbers.
#include <stdio.h>

int small(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Smaller number = %d", small(x, y));

    return 0;
}
