#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int count = 0;
    int choice, i, searchRoll;

    do
    {
        printf("\n----- STUDENT MENU -----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[count].roll);

                printf("Enter Name: ");
                scanf("%s", s[count].name);

                printf("Enter Marks: ");
                scanf("%f", &s[count].marks);

                count++;
                printf("Student added successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No records found!\n");
                }
                else
                {
                    printf("\nRoll\tName\tMarks\n");
                    for(i = 0; i < count; i++)
                    {
                        printf("%d\t%s\t%.2f\n",
                               s[i].roll,
                               s[i].name,
                               s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < count; i++)
                {
                    if(s[i].roll == searchRoll)
                    {
                        printf("Record Found!\n");
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        break;
                    }
                }

                if(i == count)
                    printf("Record not found!\n");

                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}