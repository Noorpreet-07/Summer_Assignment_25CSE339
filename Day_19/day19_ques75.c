#include <stdio.h>

int main() 
{
    int m, n, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[10][10], t[10][10];

    printf("Enter matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < m; j++) 
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}