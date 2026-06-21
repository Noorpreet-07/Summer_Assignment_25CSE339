#include <stdio.h>

int main() 
{
    char str[100], rev[100];
    int i = 0, j, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[len] != '\0') 
    {
        len++;
    }

    j = len - 1;
    for(i = 0; i < len; i++) 
    {
        rev[i] = str[j];
        j--;
    }
    rev[i] = '\0';

    printf("Reversed string = %s", rev);

    return 0;
}