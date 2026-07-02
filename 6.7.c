//6.7 WAP to display the first 10 numbers in a fibonacci series using recursive function.
#include <stdio.h>
int fibonacci(int n);
int main() 
{
    int i;
    printf("Fibonacci Series: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
int fibonacci(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}