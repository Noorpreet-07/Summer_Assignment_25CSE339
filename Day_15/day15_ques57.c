#include <stdio.h>

int main() 
{
    int n, temp , i;

    printf("Input the array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Input the array elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n / 2; i++) 
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}