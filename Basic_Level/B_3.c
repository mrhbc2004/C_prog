#include<stdio.h>
int main(){
    int num,num1,sum=0,rem;
    printf("Enter the number :");
    scanf("%d",&num);
    num1=num;
    while (num1!=0){
        rem=num1%10;
        sum=sum+rem;
        num1/=10;
    }
    printf("The sum of the digits in the number %d is : %d",num,sum);
}
