#include <stdio.h>
#include<math.h>

int main(){
    int n , start , end , sum=0 , digits=0 , remainder , num;
    printf("enter the start and end ");
    scanf("%d%d",&start,&end);

    for(n=start;n<=end;n++)
    {
        sum=0;
        digits=0;

      while(num!=0)
      {
        num=num/10;
        digits++;
      }

      num=n;

      while(num!=0)
      {
        remainder= num%10;
        sum= sum + pow(remainder,digits);
        num= num/10;
      }

      if(sum==n)
      {
        printf("%d",n);
      }

    }


    return 0;
}