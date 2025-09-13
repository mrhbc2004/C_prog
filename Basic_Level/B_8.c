
// int numofdig(int num) {
//     if (num == 0) return 1;
//     if (num < 0) num = -num;
//     return (int)floor(log10(num)) + 1;
// }

// int main() {
//     int num, num1;
//     printf("Enter the number: ");
//     scanf("%d", &num);

//     if (num < 0) {
//         printf("Negative numbers cannot be Armstrong numbers.");
//         return 0;
//     }

//     num1 = num;
//     int res = 0;
//     int k = numofdig(num);

//     while (num1 > 0) {
//         int rem = num1 % 10;
//         res = res + (int)pow(rem, k);
//         num1 /= 10;
//     }
//     printf("%d\n",res);
//     if (res == num) {
//         printf("%d is an Armstrong Number\n", num);
//     } else {
//         printf("%d is not an Armstrong Number\n", num);
//     }

//     return 0;
// }
#include <stdio.h>
#include <math.h>
int count(int n) //Function to count the number of digts
{
    if (n == 0)
        return 1;
    if (n < 0)
        n = -n;
    int cnt = 0;
    while (n != 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}
int power(int num, int a) //Function to compute the cube or square of a digit
{
    int i, res = 1;
    for (i = 0; i < a; i++)
    {
        res *= num;
    }
    return res;
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int num1 = num;
    int k = count(num);
    int res = 0;
    while (num1 != 0)
    {
        int rem = num1 % 10;
        res += power(rem, k);
        num1 /= 10;
    }
    if (res == num)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("not an armstrong\n");
    }
    // printf("%d\n", res);
    // printf("%d\n", k);
    return 0;
}
