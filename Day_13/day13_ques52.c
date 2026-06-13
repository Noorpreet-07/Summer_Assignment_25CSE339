#include <stdio.h>

int main() 
{
    int a[10], n, i;
    int even = 0, odd = 0;

    printf("Input the array size: ");
    scanf("%d", &n);

    printf("Input the array elements");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) 
    {
        if(a[i] % 2 == 0) 
        {
            even++;   
        } 
        else 
        {
            odd++;   
        }
    }

    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);

    return 0;
}