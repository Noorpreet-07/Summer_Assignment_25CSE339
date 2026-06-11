#include <stdio.h>

int sum(int a, int b) 
{
    int c;
    c = a + b;   
    return c;
}

int main() 
 {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = sum(a, b);

    printf("Sum = %d\n", result);

    return 0;
}