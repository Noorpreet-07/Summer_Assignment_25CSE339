#include <stdio.h>

int main(){
    int n , i;
    printf("input the value of n");
    scanf("%d",&n);

    printf("The factors of %d are:\n", n);

    for( i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
    }

    return 0;
}