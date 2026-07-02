/*7.4 A data file contains name, address, salary of some person. WAP to input any address and show the
records matching that address.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char line[200];
    char searchAddress[100];
    FILE *ptr = fopen("employee.txt", "r");
    if (ptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    else
    {
        printf("Enter the address to search: ");
        getchar(); // clear buffer
        fgets(searchAddress, sizeof(searchAddress), stdin);
        searchAddress[strcspn(searchAddress, "\n")] = '\0';
        printf("\nMatching records:\n");
        while (fgets(line, sizeof(line), ptr))
        {
            if (strstr(line, searchAddress) != NULL)
            {
                printf("%s", line);
            }
        }
    fclose(ptr);
    }
    return 0;
}