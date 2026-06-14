#include <stdio.h>

int main()
{
    int a[10], i , n , s , f=0 ;

    printf("input the array size");
    scanf("%d", &n);

    printf("input the array elements");

    for ( i=0 ; i<n ; i++ )
    {
        scanf("%d",&a[i]);
    }

    printf("Input the searching elements");
    scanf("%d", &s);

    for( i=0 ; i<n ; i++ )
    {
        if( a[i]==s)
        {
            f=1;
            printf("\n the elements is found at given location=%d", i+1);
            break;
        }
        
    }

    if(f==0)
        {
            printf("Search is unsuccessful");
        }

    return 0;
}