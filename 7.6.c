#include <stdio.h>
#include <stdlib.h>
void addrecord();
void viewrecord();
struct student
{
    char name[20], adress[20];
    float salary;
};
int main()
{
    int choice;
    while(1)
    {
        printf("1.Add Record\n2.View Record\n3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: addrecord(); break;
            case 2: viewrecord(); break;
            case 3: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
void addrecord()
{
    FILE *ptr = fopen("student.txt","ab");
    if(ptr == NULL)
    {
        printf("Error in opening file\n");
        return;
    }
    struct student s1;
    printf("Enter salary, name, address: ");
    scanf("%f %s %s", &s1.salary, s1.name, s1.adress);
    fwrite(&s1, sizeof(s1), 1, ptr);
    fclose(ptr);
    printf("Record Saved Successfully\n");
    printf("------------------------------------------------\n");
}
void viewrecord()
{
    FILE *ptr = fopen("student.txt","rb");
    if(ptr == NULL)
    {
        printf("Error in opening file\n");
        return;
    }
    struct student s1;
    while(fread(&s1, sizeof(s1), 1, ptr) == 1)
    {
        printf("Salary: %.2f Name: %s Address: %s\n",
               s1.salary, s1.name, s1.adress);
    }
    fclose(ptr);
    printf("------------------------------------------------\n");
}