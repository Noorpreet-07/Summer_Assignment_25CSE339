#include <stdio.h>

int main() 
{
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    printf("Enter Student Name: ");
    scanf(" %49[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    printf("\n========== MARKSHEET ==========\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", roll);
    printf("Marks      : %.2f %.2f %.2f %.2f %.2f\n", m1, m2, m3, m4, m5);
    printf("Total      : %.2f / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (grade == 'F')
        printf("Result     : FAIL\n");
    else
        printf("Result     : PASS\n");

    printf("Grade      : %c\n", grade);
    printf("================================\n");

    return 0;
}