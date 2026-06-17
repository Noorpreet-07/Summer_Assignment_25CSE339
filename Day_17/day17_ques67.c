#include <stdio.h>

int main() 
{
    int n1, n2, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    int inter[n1]; 

    printf("Intersection of arrays:\n");

    for(i = 0; i < n1; i++) 
    {
        for(j = 0; j < n2; j++) 
        {
            if(arr1[i] == arr2[j]) 
            {
                int found = 0;
                for(int x = 0; x < k; x++) 
                {
                    if(inter[x] == arr1[i]) 
                    {
                        found = 1;
                        break;
                    }
                }

                if(!found) 
                {
                    inter[k++] = arr1[i];
                    printf("%d ", arr1[i]);
                }
            }
        }
    }

    return 0;
}