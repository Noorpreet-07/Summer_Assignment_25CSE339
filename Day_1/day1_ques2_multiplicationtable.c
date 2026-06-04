#include <stdio.h>

int main(){
    int n, i=1, result;
    printf("input the value of n");
    scanf("%d",&n);
    while(i<=10)
    {
        result= n*i;
        printf("%d*%d = %d\n", n, i, result);
        i=i+1;
    }

    return 0;
}