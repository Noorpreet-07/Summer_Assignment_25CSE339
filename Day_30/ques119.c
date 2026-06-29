#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int count = 0;
    int choice, i, searchId;

    do
    {
        printf("\n----- EMPLOYEE MENU -----\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &e[count].id);

                printf("Enter Name: ");
                scanf("%s", e[count].name);

                printf("Enter Salary: ");
                scanf("%f", &e[count].salary);

                count++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No records found!\n");
                }
                else
                {
                    printf("\nID\tName\tSalary\n");
                    for(i = 0; i < count; i++)
                    {
                        printf("%d\t%s\t%.2f\n",
                               e[i].id,
                               e[i].name,
                               e[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < count; i++)
                {
                    if(e[i].id == searchId)
                    {
                        printf("Employee Found!\n");
                        printf("Name: %s\n", e[i].name);
                        printf("Salary: %.2f\n", e[i].salary);
                        break;
                    }
                }

                if(i == count)
                    printf("Employee not found!\n");

                break;

            case 4:
                printf("Enter Employee ID to update salary: ");
                scanf("%d", &searchId);

                for(i = 0; i < count; i++)
                {
                    if(e[i].id == searchId)
                    {
                        printf("Enter new salary: ");
                        scanf("%f", &e[i].salary);
                        printf("Salary updated successfully!\n");
                        break;
                    }
                }

                if(i == count)
                    printf("Employee not found!\n");

                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}