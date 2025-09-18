#include <stdio.h>
int main()
{
    int arr[2][2] = {{0, 1}, {1, 0}};
    int arr1[2][2] = {{1, 2}, {3, 4}};
    int res[2][2] = {{0, 0}, {0, 0}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", res[i][j]);
        }
    }

    return 0;
}
