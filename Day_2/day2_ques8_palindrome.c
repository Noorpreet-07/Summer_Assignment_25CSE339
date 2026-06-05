#include <stdio.h>

int main(){
    int n, r , t , s=0;
    printf("input the value of n");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        s= s*10 + r;
        n= n/10;
    }
    if(t==s)
    {
        printf("the number is Palindrome");
    }
    else
    {
        printf("the number is not Palindrome");
    }

    return 0;
}