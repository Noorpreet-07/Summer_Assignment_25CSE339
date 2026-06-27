#include <stdio.h>

struct student 
{
    int roll;
    char name[50];
    float marks;
};

int main() 
{
    struct student s[100];
    int n = 0, choice, i;

    printf("====== Student Record Management System ======\n");

    do {
        printf("\n1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student added successfully!\n");
                break;

            case 2:
                printf("\n--- Student Records ---\n");
                for(i = 0; i < n; i++) 
                {
                    printf("\nRoll: %d", s[i].roll);
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %.2f\n", s[i].marks);
                }
                break;

            case 3: 
            {
                int r, found = 0;
                printf("\nEnter roll number to search: ");
                scanf("%d", &r);

                for(i = 0; i < n; i++) 
                {
                    if(s[i].roll == r) 
                    {
                        printf("\nRecord Found!\n");
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0) 
                {
                    printf("Record not found!\n");
                }
                break;
            }

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}