#include <stdio.h>

int main() 
{
    char str[200];
    int i, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);


    for(i = 0; str[i] != '\0'; i++) 
    {
        
        if((str[i] == ' ' || str[i] == '\n') && str[i+1] != ' ' && str[i+1] != '\0') 
        {
            count++;
        }
    }

    if(str[0] != '\0' && str[0] != '\n') 
    {
        count++;
    }

    printf("Number of words = %d\n", count);

    return 0;
}