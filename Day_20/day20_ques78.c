#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    int Symmetric = 1;

    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(a[i][j] != a[j][i]) 
            {
                Symmetric = 0;
                break;
            }
        }
    }

    if(Symmetric == 1)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is Not Symmetric");

    return 0;
}