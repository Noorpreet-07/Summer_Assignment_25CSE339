#include <stdio.h>

int main(){
    int n , f=1, i=1;
    printf("input the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i=i+1;
    }
    printf("the factorial of %d is %d",n, f);

    return 0;
}