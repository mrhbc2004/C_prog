#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements:");
        scanf("%d", &arr[i]);
    }
    int large = arr[0], small = arr[0];
    for (int i = 1; i < n; i++)
    { // initialized with 1 because 0th element already stored in variables
        if (arr[i] > large)
        {
            large = arr[i];
        }
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("The largest number in the array is :%d\n", large);
    printf("The smallest number in the array is :%d\n", small);
    return 0;
}
