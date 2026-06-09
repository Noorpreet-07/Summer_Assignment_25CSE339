#include <stdio.h>

int main(){
    int n , arr[32] , i=0 , j ;

    printf("The Decimal number is : ");
    scanf("%d",&n);

    while(n!=0)
    {
       arr[i] = n%2;
       n = n/2;
       i++;
    }

    printf("Binary number is  :");

    for( j=i-1 ; j>=0 ; j-- )
    { 
        printf("%d", arr[j]);
    }


    return 0;
}