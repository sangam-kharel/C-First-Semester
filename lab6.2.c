// 2 Create a function void print(int a,int b) that prints all even numbers from a to b.
#include <stdio.h>

void print(int a, int b) {
    int i;

    printf("Even numbers:\n");
    for (i = a; i <= b; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    print(a, b);

    return 0;
}
