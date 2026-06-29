#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int issued; 
};

int main()
{
    struct Book b[100];
    int count = 0;
    int choice, i, searchId;

    do
    {
        printf("\n----- LIBRARY MENU -----\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[count].id);

                printf("Enter Book Name: ");
                scanf("%s", b[count].name);

                printf("Enter Author Name: ");
                scanf("%s", b[count].author);

                b[count].issued = 0;

                count++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No books available!\n");
                }
                else
                {
                    printf("\nID\tName\tAuthor\tStatus\n");
                    for(i = 0; i < count; i++)
                    {
                        printf("%d\t%s\t%s\t%s\n",
                               b[i].id,
                               b[i].name,
                               b[i].author,
                               b[i].issued ? "Issued" : "Available");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < count; i++)
                {
                    if(b[i].id == searchId)
                    {
                        printf("Book Found!\n");
                        printf("Name: %s\n", b[i].name);
                        printf("Author: %s\n", b[i].author);
                        printf("Status: %s\n", b[i].issued ? "Issued" : "Available");
                        break;
                    }
                }

                if(i == count)
                    printf("Book not found!\n");

                break;

            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);

                for(i = 0; i < count; i++)
                {
                    if(b[i].id == searchId)
                    {
                        if(b[i].issued == 0)
                        {
                            b[i].issued = 1;
                            printf("Book issued successfully!\n");
                        }
                        else
                        {
                            printf("Book already issued!\n");
                        }
                        break;
                    }
                }

                if(i == count)
                    printf("Book not found!\n");

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