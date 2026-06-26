#include <stdio.h>

int main() 
{
    int score = 0;
    char ans;

    printf("====== Quiz Application ======\n\n");

    
    printf("Q1. Which data type is used to store decimal numbers in C?\n");
    printf("A. int\nB. float\nC. char\nD. double\n");
    printf("Your answer: ");
    scanf(" %c", &ans);

    if (ans == 'B' || ans == 'b') 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
    {
        printf("Wrong! Correct answer is B (float)\n\n");
    }

    
    printf("Q2. Which symbol is used for single-line comments in C?\n");
    printf("A. //\nB. /* */\nC. #\nD. --\n");
    printf("Your answer: ");
    scanf(" %c", &ans);

    if (ans == 'A' || ans == 'a') 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
    {
        printf("Wrong! Correct answer is A (//)\n\n");
    }


    printf("Q3. What is the correct syntax to print output in C?\n");
    printf("A. print()\nB. cout<<\nC. printf()\nD. echo\n");
    printf("Your answer: ");
    scanf(" %c", &ans);

    if (ans == 'C' || ans == 'c') 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
    {
        printf("Wrong! Correct answer is C (printf)\n\n");
    }

    
    printf("Q4. Which loop is guaranteed to execute at least once?\n");
    printf("A. for loop\nB. while loop\nC. do-while loop\nD. none\n");
    printf("Your answer: ");
    scanf(" %c", &ans);

    if (ans == 'C' || ans == 'c') 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
    {
        printf("Wrong! Correct answer is C (do-while loop)\n\n");
    }

    
    printf("Q5. Which header file is required for printf() function?\n");
    printf("A. conio.h\nB. stdlib.h\nC. math.h\nD. stdio.h\n");
    printf("Your answer: ");
    scanf(" %c", &ans);

    if (ans == 'D' || ans == 'd') 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
    {
        printf("Wrong! Correct answer is D (stdio.h)\n\n");
    }

    
    printf("====== Quiz Finished ======\n");
    printf("Your Score: %d/5\n", score);

    float percentage = (score / 5.0) * 100;
    printf("Percentage: %.2f%%\n", percentage);

    if (score == 5)
    {
        printf("Excellent performance!\n");
    }

    else if (score >= 3)
    {
        printf("Good understanding.\n");
    }
    
    else
    {
        printf("Needs more practice.\n");
    }    

    return 0;
}