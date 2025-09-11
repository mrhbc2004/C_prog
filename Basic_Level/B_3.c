#include<stdio.h>
// Can be implemented using recursive function also
int sumofdigits(int num){
    if(num==0) 
        return 0;
    return (num%10)+sumofdigits(num/10);
}

int main(){
    int num,num1,sum1=0,sum2=0,rem;
    printf("Enter the number :");
    scanf("%d",&num);
    num1=num;
    sum2=sumofdigits(num1); // this line should be first or else num1 will be changed to 0 if executed after while loop
    // also we can use num in the function like sumofdigits(num)
    while (num1!=0){
        rem=num1%10;
        sum1+=rem;
        num1/=10;
    }
    
    printf("The sum of the digits in the number %d is : %d, this is using while loop\n",num,sum1);
    printf("The sum of the digits in the number %d is : %d this is using recursive functions",num,sum2);
    return 0;
}

