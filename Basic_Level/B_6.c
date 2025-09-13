#include<stdio.h>
int gcd(int num1,int num2){
    int i,res;
    for (int i=1;i<=num1 && i<=num2;i++)   {
        if(num1%i==0 && num2%i==0){
            res=i;
        }
    }
    return res;
}
int lcm(int num1,int num2){
    int fact=1;
    int res=(num1>num2)?num1:num2;
    while(fact){
        if(res%num1==0 && res%num2==0){
            fact=0;
            return res;
        }
        res++;
    }
}
int main(){
    int num1,num2,fact=1;
    // printf("Enter the first number:");
    // scanf("%d",&num1);
    // printf("Enter the second number:");
    // scanf("%d",&num2);
    printf("Enter the 2 numbers:");
    scanf("%d%d",&num1,&num2);
    // LCM of two numbers 
    printf("The LCM of %d and %d is :%d\n",num1,num2,lcm(num1,num2));
    // HCF of two numbers
    printf("The GCD of %d and %d is :%d\n",num1,num2,gcd(num1,num2));
    return 0;
}
