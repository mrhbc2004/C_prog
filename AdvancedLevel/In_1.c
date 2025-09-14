#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element:");
        scanf("%d", &arr[i]);
    }
    printf("Array before reversing\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nArray after reversing\n");
    for(int i=0;i<n;i++){
        arr2[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr2[i]);
    }
    // If you dont want to use extra array arr2 to reverse then use this
    // for (int i = 0; i < n / 2; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[n - i - 1];
    //     arr[n - i - 1] = temp;
    // }

    // printf("\nArray after reversing\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }
    return 0;
}
