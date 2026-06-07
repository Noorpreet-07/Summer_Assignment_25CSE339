#include <stdio.h>

int main(){
    int n ,  c, a=0 , b=1 , i;
    printf("input the value of n");
    scanf("%d",&n);
    
    if (n >= 1) 
     {
        printf("%d", a);
     }

    if (n >= 2)
     {
        printf("\t%d", b);
     }

    i=3;

    while(i<=n)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
        i=i+1;
    }
    printf("\n");  

    return 0;
}