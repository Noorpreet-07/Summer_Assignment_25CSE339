#include <stdio.h>

int main(){
    int n, c=0;
    printf("input the value of n");
    scanf("%d",&n);
    while(n>0)
    {
        c=c+1;
        n=n/10;
    }
    printf("number of digits is %d", c);
    
    return 0;
}