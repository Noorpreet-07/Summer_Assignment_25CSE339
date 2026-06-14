#include <stdio.h>

int main() 
{
    int n, i, j = 0;

    printf("Input the array size: ");
    scanf("%d", &n);

    int a[n];

    printf("input the array elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", & a[i]);
    }

    for(i = 0; i < n; i++) 
    {
        if(a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }

    while(j < n) 
    {
        a[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}