#include <stdio.h>

int main()
{
    int a[100] , i , j , n , t;

    printf("Input the array size");
    scanf("%d",&n);

    printf("Input the array elements");

    for ( i=0 ; i<n ; i++ )
    {
        scanf("%d",&a[i]);
    }

    for( i=0 ; i<n-1 ; i++ )
    {
        for( j=0 ; j<n-i-1 ; j++ )
        {
            if( a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    printf("\n the elements are sorted in ascending order");

    for(i=0 ; i<n ; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}