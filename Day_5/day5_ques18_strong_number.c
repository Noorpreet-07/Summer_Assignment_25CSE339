#include <stdio.h>

int main(){
    int n , num , remainder , i , sum=0 , fact;
    printf("input the value of n");
    scanf("%d",&n);

    num = n;

    while(num!=0)
    {
      remainder = num%10;
      
      fact=1;

      for(i=1;i<=remainder;i++)
      {
        fact = fact*i;
      }

      sum = sum + fact;
      num=num/10;
    }

    if(sum==n)
    {
        printf("The number is a Strong number");
    }

    else
    {
        printf("The number is not strong number");
    }


    return 0;
}