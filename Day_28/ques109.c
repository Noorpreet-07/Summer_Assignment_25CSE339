#include <stdio.h>
#include <string.h>

struct Book 
{
    int id;
    char name[50];
    char author[50];
    int quantity;
};

struct Book b[100];
int count = 0;


void addBook() 
{
    printf("\nEnter Book ID: ");
    scanf("%d", &b[count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b[count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[count].author);

    printf("Enter Quantity: ");
    scanf("%d", &b[count].quantity);

    count++;
    printf("Book Added Successfully!\n");
}


void displayBooks() 
{
    printf("\n--- Book List ---\n");
    for(int i = 0; i < count; i++) 
    {
        printf("ID: %d\n", b[i].id);
        printf("Name: %s\n", b[i].name);
        printf("Author: %s\n", b[i].author);
        printf("Quantity: %d\n\n", b[i].quantity);
    }
}


void searchBook() 
{
    int id, found = 0;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) 
    {
        if(b[i].id == id) 
        {
            printf("\nBook Found!\n");
            printf("Name: %s\n", b[i].name);
            printf("Author: %s\n", b[i].author);
            printf("Quantity: %d\n", b[i].quantity);
            found = 1;
            break;
        }
    }

    if(found == 0) 
    {
        printf("Book not found!\n");
    }
}


void issueBook() 
{
    int id;
    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) 
    {
        if(b[i].id == id) 
        {
            if(b[i].quantity > 0) 
            {
                b[i].quantity--;
                printf("Book Issued Successfully!\n");
            } 
            else 
            {
                printf("Book not available!\n");
            }
            return;
        }
    }

    printf("Book not found!\n");
}


int main() 
{
    int choice;

    while(1) 
    {
        printf("\n--- Library Menu ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}