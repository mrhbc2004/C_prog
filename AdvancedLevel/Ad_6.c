#include <stdio.h>

void mergearrays(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        merged[k++] = arr1[i++];
    }
    while (j < n2)
    {
        merged[k++] = arr2[j++];
    }
}
int main()
{
    int n1, n2;
    printf("Enter the number of elements in two arrays:");
    scanf("%d%d", &n1, &n2);
    int arr1[n1], arr2[n2], merged[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &arr1[i]);
    }
    for (int j = 0; j < n2; j++)
    {
        printf("Enter the %d element:", j + 1);
        scanf("%d", &arr2[j]);
    }
    mergearrays(arr1, n1, arr2, n2, merged);
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d\t", merged[i]);
    }
    return 0;
}
