#include <stdio.h>

int main(){
    int a[100] , n , i , low , high , mid , f=0 , s;

    printf("Input the array size");
    scanf("%d",&n);

    printf("Input the array elements");

    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Input the searching element");
    scanf("%d",&s);

    low=0;
    high=n-1;

    do
    {
        mid = (low+high)/2;
        if( a[mid]==s)
        {
            f=1;
            printf("The element is found at given place %d", mid+1);
            break;
        }

        else if( a[mid]>s)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
     while (low<=high && a[mid]!=s);
     if(f==0)
     {
        printf("unsuccessful");
     }
    
    return 0;
}