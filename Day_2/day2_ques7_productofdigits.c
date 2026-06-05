
#include <stdio.h>

int main(){
    int p=1, r, n;
    printf("input the value of n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        p= p*r;
        n=n/10;
    }
    printf("the product of digits is %d", p);
    
    return 0;
}