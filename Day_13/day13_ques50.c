#include <stdio.h>

int main() 
{
    int a[10], n, i;
    int s = 0;
    float average;

    printf("Input the array size: ");
    scanf("%d", &n);

    printf("Input the array elements");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        s = s + a[i];   
    }

    average = (float)sum / n;   

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}