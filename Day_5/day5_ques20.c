#include <stdio.h>

int main(){
    int i , n , largest;
    printf("input the value of n");
    scanf("%d",&n);

    while(n%2==0)
    {
        largest = 2;
        n = n/2;
    }

    for( i=3 ; i*i<=n ; i=i+2)
    {
        while(n%i==0)
        {
            largest = i;
            n = n/i;
        }
    }

     if(n>2)
        {
            largest=n;
        }

        printf("%d", largest);


    return 0;
}