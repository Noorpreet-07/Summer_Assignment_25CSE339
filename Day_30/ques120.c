#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int count = 0;


void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
    printf("Student added successfully!\n");
}


void displayStudents()
{
    if(count == 0)
    {
        printf("No records found!\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");
    for(int i = 0; i < count; i++)
    {
        printf("%d\t%s\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
}


void searchStudent()
{
    int roll, found = 0;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            printf("Record Found!\n");
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student not found!\n");
}


void updateMarks()
{
    int roll, found = 0;
    printf("Enter Roll Number to update: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            printf("Enter new marks: ");
            scanf("%f", &s[i].marks);
            printf("Updated successfully!\n");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student not found!\n");
}


void deleteStudent()
{
    int roll, i, j, found = 0;
    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            for(j = i; j < count - 1; j++)
            {
                s[j] = s[j + 1];
            }
            count--;
            printf("Record deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student not found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n----- STUDENT MANAGEMENT SYSTEM -----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateMarks(); break;
            case 5: deleteStudent(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}