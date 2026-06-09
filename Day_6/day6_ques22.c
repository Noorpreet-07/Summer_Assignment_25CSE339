#include <stdio.h>

int main(){
    int n , decimal=0 , power=1 , remainder ;
    printf("The Binary number is : ");
    scanf("%d",&n);

    while(n>0)
    {
        remainder = n%10;
        decimal = decimal + remainder*power;
        power = power*2;
        n=n/10;
    }

    printf("The Decimal number is %d : ", decimal);


    return 0;
}