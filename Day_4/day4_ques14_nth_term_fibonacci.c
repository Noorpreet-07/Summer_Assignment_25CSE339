#include <stdio.h>

int main(){
    int n , c , a=0 , b=1, i;
    printf("input the value of n");
    scanf("%d",&n);

    if(n==1)
    {
        printf("Nth Fibonacci term is %d\n", a);
    }

    else if(n==2)
    {
        printf("Nth Fibonacci term is %d\n", b);
    }

    else
    {
        i=3;
        while(i<=n)
        {
        c=a+b;
        a=b;
        b=c;
        i=i+1;
        }
        printf(" Nth fibonacci term is %d\n", b);
    }

    return 0;
}