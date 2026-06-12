#include <stdio.h>

int Palindrome(int n) 
{
    int original = n, reverse = 0, remainder;

    while (n != 0) 
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
        return 1;   
    else
        return 0;  
}

int main()
 {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Palindrome(num))
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}