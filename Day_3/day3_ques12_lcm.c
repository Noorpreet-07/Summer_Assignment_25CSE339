#include <stdio.h>

int main(){
    int a, b, x, y, i, gcd, lcm;
    printf("input the value of a and b");
    scanf("%d %d",&a,&b);

    x=a;
    y=b;

    while(y!=0)
    {
        i=y;
        y=x%y;
        x=i;
    }

    gcd=x;

    lcm= (a*b)/gcd;

    printf("The LCM is %d: ", lcm);

    return 0;
}