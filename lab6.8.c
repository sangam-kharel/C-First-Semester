//8. WAP to multiply two numbers using recursive function.
#include <stdio.h>

int multiply(int a, int b) {
    if (b == 0)
        return 0;
    else
        return a + multiply(a, b - 1);
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Product = %d", multiply(x, y));

    return 0;
}
