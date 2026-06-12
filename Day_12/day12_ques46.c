#include <stdio.h>

// Function to check Armstrong (without using pow)
int Armstrong(int n)
 {
    int original = n, remainder, sum = 0, digits = 0, temp;

    temp = n;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0) 
    {
        remainder = temp % 10;

        int power = 1;
        for (int i = 1; i <= digits; i++) 
        {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    return (sum == original);
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Armstrong(num))
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}