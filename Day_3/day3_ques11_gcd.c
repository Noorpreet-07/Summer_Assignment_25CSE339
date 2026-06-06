#include <stdio.h>

int main(){
    int a, b, i ;
    printf("input the value of a and b");
    scanf("%d %d",&a,&b);

    while(b!=0)
    {
        i = b ;
        b = a%b;
        a = i;
    }

    printf("GCD is %d: ", a);

    return 0;
}