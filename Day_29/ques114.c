#include <stdio.h>

int main()
{
    int arr[100], n = 0, i, choice, value, pos;

    do
    {
        printf("\n--- Array Menu ---\n");
        printf("1. Insert elements\n");
        printf("2. Display elements\n");
        printf("3. Search element\n");
        printf("4. Delete element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                printf("Enter elements:\n");
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Array elements are:\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &value);
                for(i = 0; i < n; i++)
                {
                    if(arr[i] == value)
                    {
                        printf("Element found at position %d\n", i + 1);
                        break;
                    }
                }
                if(i == n)
                    printf("Element not found\n");
                break;

            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos >= 1 && pos <= n)
                {
                    for(i = pos - 1; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted\n");
                }
                else
                {
                    printf("Invalid position\n");
                }
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