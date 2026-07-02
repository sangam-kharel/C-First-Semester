//1. Creatte a function void check(int n) that checks wheather given number is odd or even.
#include <stdio.h>
void check(int n) 
{
    if (n % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    check(num);

    return 0;
}