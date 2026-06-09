#include <stdio.h>

int main(){
    int x , n , result=1 ;
    printf("input the base and power");
    scanf("%d %d", &x , &n );

    while(n>0)
    {
        result = result * x;
        n--;
    }

    printf("The answer is %d ", result);


    return 0;
}