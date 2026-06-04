#include <stdio.h>

int main(){
    int n, s=0, i=1;
    printf("Input the number of terms");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i=i+1;
    }
    printf("sum of n digits is %d",s);

    return 0;
}