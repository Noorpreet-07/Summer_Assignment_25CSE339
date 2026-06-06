#include <stdio.h>

int main()
{
    int n, i=2, c=0;
    printf("input the number n");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
        i=i+1;
    }
    if(c==0)
    {printf("The number is prime ");}
    else
    {
        printf("The number is not prime");
    }


    return 0;
}