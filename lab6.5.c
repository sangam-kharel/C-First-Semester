//5. Create a function that takes an int array as argument and 
// returns the smallest value in the array.
#include <stdio.h>
int smallest(int arr[], int n) {
    int i, min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

int main() {
    int arr[5], i;
    

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Smallest = %d", smallest(arr, 5));

    return 0;
}
