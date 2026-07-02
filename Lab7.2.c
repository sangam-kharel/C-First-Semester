/*2. A data file "number.txt" contains some numbers. WAP to read the numbers 
and store all even numbers into "even.txt" and all odd numbers into "odd.txt".
*/
#include <stdio.h>
int main() {
    int number;
    FILE *ptr1 =fopen("number.txt", "r");
    FILE *ptr2 =fopen("even.txt", "w");
    FILE *ptr3 =fopen("odd.txt", "w");
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL) {
        printf("Error opening file.\n");
    } else
    {
        while (fscanf(ptr1, "%d", &number) == 1) {
            if (number % 2 == 0) {
                fprintf(ptr2, "%d\n", number);
            } else {
                fprintf(ptr3, "%d\n", number);
            }
        }
        printf("Numbers have been categorized into even and odd files successfully.\n");
    }
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    return 0;
}
