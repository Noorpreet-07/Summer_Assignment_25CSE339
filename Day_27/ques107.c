#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee 
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float pf;
    float grossSalary;
    float netSalary;
};

struct Employee emp[MAX];
int count = 0;

void addEmployee();
void displayEmployees();
void searchEmployee();
void calculateSalary(struct Employee *e);
void updateEmployee();
void deleteEmployee();

int main() 
{
    int choice;

    while (1) 
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary Record\n");
        printf("5. Delete Employee Record\n");
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

void calculateSalary(struct Employee *e) 
{
    e->hra = 0.20f * e->basicSalary;
    e->da  = 0.10f * e->basicSalary;
    e->pf  = 0.12f * e->basicSalary;
    e->grossSalary = e->basicSalary + e->hra + e->da;
    e->netSalary = e->grossSalary - e->pf;
}

void addEmployee() 
{
    if (count >= MAX) 
    {
        printf("Record limit reached.\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp[count].id);

    getchar();
    printf("Enter Employee Name: ");
    fgets(emp[count].name, sizeof(emp[count].name), stdin);
    emp[count].name[strcspn(emp[count].name, "\n")] = 0;

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basicSalary);

    calculateSalary(&emp[count]);

    count++;
    printf("Salary record added successfully.\n");
}

void displayEmployees() 
{
    if (count == 0) 
    {
        printf("No salary records found.\n");
        return;
    }

    printf("\n%-8s %-20s %-10s %-10s %-10s %-10s %-12s %-12s\n",
           "ID", "Name", "Basic", "HRA", "DA", "PF", "Gross", "Net");

    for (int i = 0; i < count; i++) 
    {
        printf("%-8d %-20s %-10.2f %-10.2f %-10.2f %-10.2f %-12.2f %-12.2f\n",
               emp[i].id, emp[i].name, emp[i].basicSalary, emp[i].hra,
               emp[i].da, emp[i].pf, emp[i].grossSalary, emp[i].netSalary);
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
            printf("\nEmployee Found:\n");
            printf("ID: %d\nName: %s\nBasic Salary: %.2f\nHRA: %.2f\nDA: %.2f\nPF: %.2f\nGross Salary: %.2f\nNet Salary: %.2f\n",
                   emp[i].id, emp[i].name, emp[i].basicSalary, emp[i].hra,
                   emp[i].da, emp[i].pf, emp[i].grossSalary, emp[i].netSalary);
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

            printf("Enter new basic salary: ");
            scanf("%f", &emp[i].basicSalary);

            calculateSalary(&emp[i]);
            printf("Salary record updated successfully.\n");
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
            printf("Employee record deleted successfully.\n");
            break;
        }
    }

    if (!found) 
    {
        printf("Employee not found.\n");
    }
}