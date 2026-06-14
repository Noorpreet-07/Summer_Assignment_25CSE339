#include <stdio.h>

int main() 
{
    int n, i, j, sum;

    printf("Input the array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input the array elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &sum);

    printf("Pairs with given sum are:\n");

    for(i = 0; i < n; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            if(arr[i] + arr[j] == sum) 
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}