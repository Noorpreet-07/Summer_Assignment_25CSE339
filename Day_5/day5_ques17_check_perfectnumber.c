#include <stdio.h>

int main(){
    int n , sum=0 , i;
    printf("input the value of n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum = sum+i;
        }
    }

    if(sum==n)
    {
        printf("The given number is perfect");
    }
    else
    {
        printf("The number is not perfect");
    }


    return 0;
}