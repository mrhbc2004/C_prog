#include <stdio.h>
int main()
{
    int n, k = 0;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int isdup, arr[n], unique[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    // removing duplicates
    for (int i = 0; i < n; i++)
    {
        isdup = 0;
        for (int j = 0; j < k; j++)
        {
            if (arr[i] == unique[j])
            {
                isdup = 1;
                break;
            }
        }
        if (!isdup)
        {
            unique[k] = arr[i];
            k++;
        }
    }
    printf("Array before removing duplicates\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nArray after removing duplicates\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\t", unique[i]);
    }

    return 0;
}
