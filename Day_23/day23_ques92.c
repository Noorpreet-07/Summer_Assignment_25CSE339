#include <stdio.h>

int main() 
{
    char str[100];
    int i, j, count, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ' ' || str[i] == '\n')
        {
            continue;
        }

        count = 0;

        for(j = 0; str[j] != '\0'; j++) 
        {
            if(str[i] == str[j]) 
            {
                count++;
            }
        }

        if(count > max) 
        {
            max = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", max);

    return 0;
}