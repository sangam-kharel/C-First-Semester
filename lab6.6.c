//6. WAP to find the factorial of a number using recursive function.
#include <stdio.h>
int factorial(int n);
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial = %d", factorial(num));
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

