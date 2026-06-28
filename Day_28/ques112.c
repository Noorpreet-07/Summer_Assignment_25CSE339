#include <stdio.h>
#include <string.h>

struct Contact 
{
    char name[50];
    char phone[15];
};

struct Contact c[100];
int count = 0;


void addContact() 
{
    printf("\nEnter Name: ");
    scanf(" %[^\n]", c[count].name);

    printf("Enter Phone Number: ");
    scanf(" %[^\n]", c[count].phone);

    count++;
    printf("Contact Added Successfully!\n");
}


void displayContacts() 
{
    printf("\n--- Contact List ---\n");
    for(int i = 0; i < count; i++) 
    {
        printf("Name: %s\n", c[i].name);
        printf("Phone: %s\n\n", c[i].phone);
    }
}


void searchContact() 
{
    char name[50];
    int found = 0;

    printf("\nEnter name to search: ");
    scanf(" %[^\n]", name);

    for(int i = 0; i < count; i++) 
    {
        if(strcmp(c[i].name, name) == 0) 
        {
            printf("\nContact Found!\n");
            printf("Name: %s\n", c[i].name);
            printf("Phone: %s\n", c[i].phone);
            found = 1;
            break;
        }
    }

    if(found == 0) 
    {
        printf("Contact not found!\n");
    }
}


void deleteContact() 
{
    char name[50];
    int found = 0;

    printf("\nEnter name to delete: ");
    scanf(" %[^\n]", name);

    for(int i = 0; i < count; i++) 
    {
        if(strcmp(c[i].name, name) == 0) 
        {
            for(int j = i; j < count - 1; j++) 
            {
                c[j] = c[j + 1];
            }
            count--;
            printf("Contact Deleted Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0) 
    {
        printf("Contact not found!\n");
    }
}


int main() 
{
    int choice;

    while(1) 
    {
        printf("\n--- Contact Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: deleteContact(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}