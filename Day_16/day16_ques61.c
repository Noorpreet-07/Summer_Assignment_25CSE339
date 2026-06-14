#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter value of n (total numbers should be n-1): ");
    scanf("%d", &n);

    int a[n-1];

    printf("Enter %d elements:\n", n-1);
    for(i = 0; i < n-1; i++) 
    {
        scanf("%d", &a[i]);
    }

    int total = n * (n + 1) / 2;

    int sum = 0;
    for(i = 0; i < n-1; i++) 
    {
        sum += a[i];
    }

    int missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}