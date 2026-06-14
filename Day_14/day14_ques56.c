#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Input the array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Input the array elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            if(a[i] == a[j]) 
            {
                printf("%d ", a[i]);
                break; 
            }
        }
    }

    return 0;
}