#include <stdio.h>

int main() 
{
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') 
    {
    
        if(str[i] != ' ' && str[i] != '\n') 
        {
            word[j++] = str[i];
        } 
        else 
        {
            word[j] = '\0';
            len = j;

            if(len > max) 
            {
                max = len;
                int k;
                for(k = 0; k <= j; k++) 
                {
                    longest[k] = word[k];
                }
            }

            j = 0; 
        }
        i++;
    }


    word[j] = '\0';
    if(j > max) 
    {
        int k;
        for(k = 0; k <= j; k++) 
        {
            longest[k] = word[k];
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}