#include <stdio.h>

int maximum(int a, int b) 
{
    if (a > b)
        return a;
    else
        return b;
}

int main() 
{
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = maximum(a, b);

    printf("Maximum = %d\n", max);

    return 0;
}