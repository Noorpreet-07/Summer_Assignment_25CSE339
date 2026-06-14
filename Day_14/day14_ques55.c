#include <stdio.h>

int main()
 {
    int n, i;
    
    printf("Input the array size : ");
    scanf("%d", &n);

    int a[n];

    printf("Input the array elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int secondLargest = a[0];

    for(i = 1; i < n; i++) 
    {
        if(a[i] > largest) 
        {
            secondLargest = largest;
            largest = a[i];
        } 
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    printf("Second Largest Element = %d\n", secondLargest);

    return 0;
}