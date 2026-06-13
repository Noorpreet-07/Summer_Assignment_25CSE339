#include <stdio.h>

int main() 
{
    int a[10], n, i;

    printf("Input the Array size : ");
    scanf("%d", &n);

    printf("\n input the array elements");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}