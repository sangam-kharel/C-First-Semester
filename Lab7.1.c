//LAB-7.1 WAP to copy the content of file "tu.txt" into "university.txt"
#include <stdio.h>
int main() {
    FILE *ptr=fopen("tu.txt", "r");
    FILE *ptr1=fopen("university.txt", "w");
    if(ptr == NULL || ptr1 == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    else
    {
        char ch;
        while((ch = fgetc(ptr)) != EOF)
        {
            fputc(ch, ptr1);
        }
        printf("File copied successfully.\n");
    }
    fclose(ptr);
    fclose(ptr1);
    return 0;
}