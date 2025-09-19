#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of rows and columns:");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    int tarr[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the [%d][%d] element:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix before Transpose\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix after Transpose\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            tarr[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d\t", tarr[i][j]);
        }
        printf("\n");
    }
    // Printing the Transpose of arr without using extra array

    printf("\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
