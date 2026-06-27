#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee 
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

void addEmployee();
void displayEmployees();
void searchEmployee();
void updateEmployee();
void deleteEmployee();

int main() 
{
    int choice;

    while (1) 
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: printf("Exiting program...\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}

void addEmployee() 
{
    if (count >= MAX) 
    {
        printf("Employee database is full.\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp[count].id);

    getchar();
    printf("Enter Name: ");
    fgets(emp[count].name, sizeof(emp[count].name), stdin);
    emp[count].name[strcspn(emp[count].name, "\n")] = 0;

    printf("Enter Department: ");
    fgets(emp[count].department, sizeof(emp[count].department), stdin);
    emp[count].department[strcspn(emp[count].department, "\n")] = 0;

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;
    printf("Employee added successfully.\n");
}

void displayEmployees() 
{
    if (count == 0) 
    {
        printf("No employee records found.\n");
        return;
    }

    printf("\n%-10s %-20s %-20s %-10s\n", "ID", "Name", "Department", "Salary");
    for (int i = 0; i < count; i++) 
    {
        printf("%-10d %-20s %-20s %-10.2f\n",
               emp[i].id, emp[i].name, emp[i].department, emp[i].salary);
    }
}

void searchEmployee() 
{
    int id, found = 0;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (emp[i].id == id) 
        {
            printf("Employee Found:\n");
            printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n",
                   emp[i].id, emp[i].name, emp[i].department, emp[i].salary);
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("Employee not found.\n");
    }
}

void updateEmployee() 
{
    int id, found = 0;
    printf("Enter Employee ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (emp[i].id == id) 
        {
            found = 1;

            getchar();
            printf("Enter new name: ");
            fgets(emp[i].name, sizeof(emp[i].name), stdin);
            emp[i].name[strcspn(emp[i].name, "\n")] = 0;

            printf("Enter new department: ");
            fgets(emp[i].department, sizeof(emp[i].department), stdin);
            emp[i].department[strcspn(emp[i].department, "\n")] = 0;

            printf("Enter new salary: ");
            scanf("%f", &emp[i].salary);

            printf("Employee updated successfully.\n");
            break;
        }
    }

    if (!found) 
    {
        printf("Employee not found.\n");
    }
}

void deleteEmployee() 
{
    int id, found = 0;

    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (emp[i].id == id) 
        {
            found = 1;
            for (int j = i; j < count - 1; j++) 
            {
                emp[j] = emp[j + 1];
            }
            count--;
            printf("Employee deleted successfully.\n");
            break;
        }
    }

    if (!found) 
    {
        printf("Employee not found.\n");
    }
}