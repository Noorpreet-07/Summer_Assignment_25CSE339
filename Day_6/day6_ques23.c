#include <stdio.h>

int main(){
    int n, count=0;

    printf("the number is : ");
    scanf("%d",&n);

    while(n>0)
    {
        if(n%2==1)
        {
            count++;
        }
        n=n/2;
    }

    printf("the set bits is %d", count);


    return 0;
    
}