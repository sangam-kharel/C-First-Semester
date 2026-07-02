/*3. Write a program to input a line of text store it in a file and then read 
from file and display its contents.
*/
#include<stdio.h>
int main()
{
    FILE *ptr;
    char line[100];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);
    ptr = fopen("line.txt", "w");
    if (ptr == NULL) {
        printf("Error: Cannot open file 'line.txt' for writing\n");
    } else {
        fprintf(ptr, "%s", line);
        fclose(ptr);
        
        ptr = fopen("line.txt", "r");
        if (ptr == NULL) {
            printf("Error: Cannot open file 'line.txt' for reading\n");
        } else {
            printf("Contents of the file:\n");
            while (fgets(line, sizeof(line), ptr) != NULL) {
                printf("%s", line);
            }
            fclose(ptr);
        }
    }
    return 0;
} 