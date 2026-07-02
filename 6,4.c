//4. Create a function that takes one integer argument and finds the sum of its digits.
#include <stdio.h>
int sum(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits = %d", sum(number));

    return 0;
}
