#include <stdio.h>
#include <string.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item inv[100];
    int count = 0;
    int choice, i, searchId;

    do
    {
        printf("\n----- INVENTORY MENU -----\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &inv[count].id);

                printf("Enter Item Name: ");
                scanf("%s", inv[count].name);

                printf("Enter Quantity: ");
                scanf("%d", &inv[count].quantity);

                printf("Enter Price: ");
                scanf("%f", &inv[count].price);

                count++;
                printf("Item Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No items in inventory!\n");
                }
                else
                {
                    printf("\nID\tName\tQty\tPrice\n");
                    for(i = 0; i < count; i++)
                    {
                        printf("%d\t%s\t%d\t%.2f\n",
                               inv[i].id,
                               inv[i].name,
                               inv[i].quantity,
                               inv[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < count; i++)
                {
                    if(inv[i].id == searchId)
                    {
                        printf("Item Found!\n");
                        printf("Name: %s\n", inv[i].name);
                        printf("Quantity: %d\n", inv[i].quantity);
                        printf("Price: %.2f\n", inv[i].price);
                        break;
                    }
                }

                if(i == count)
                    printf("Item not found!\n");

                break;

            case 4:
                printf("Enter Item ID to update: ");
                scanf("%d", &searchId);

                for(i = 0; i < count; i++)
                {
                    if(inv[i].id == searchId)
                    {
                        printf("Enter new quantity: ");
                        scanf("%d", &inv[i].quantity);
                        printf("Updated successfully!\n");
                        break;
                    }
                }

                if(i == count)
                    printf("Item not found!\n");

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