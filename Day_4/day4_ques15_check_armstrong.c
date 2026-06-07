#include <stdio.h>

int main(){

    int n , num , original , remainder , sum =0 , digits=0 ;
    printf("input the value of n");
    scanf("%d",&n);

    original = n;
    num = n;

    while(num!=0)
    {
        num=num/10;
        digits++;
    }

    num = n;

    while(n!=0)
    {
        remainder = num%10 ;
        sum = sum + pow(remainder,digits);
        num = num/10;
    }

    if(sum==num)
    {
        printf("The given number is an Armstrong number");
    }
    else
    {
        printf("The guven number is not an armstrong number");
    }
      

    return 0;
}