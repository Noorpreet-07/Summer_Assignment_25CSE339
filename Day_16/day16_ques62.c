#include <stdio.h>

int main() 
{
    int n, i, j, count, maxCount = 0, element;

    printf("Input the array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input the array elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) 
    {
        count = 1;

        for(j = i + 1; j < n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                count++;
            }
        }

        if(count > maxCount) 
        {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d", maxCount);

    return 0;
}