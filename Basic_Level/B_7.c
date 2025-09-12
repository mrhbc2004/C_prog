#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number a:");
    scanf("%d",&a);
    printf("Enter the second number b:");
    scanf("%d",&b);
  
    // with using Temp variable 
    // int temp=b;
    // b=a;
    // a=temp;

    //without using temp variable
    // a=a+b;
    // b=a-b;
    // a=a-b;

    
    printf("a:%d \t b:%d",a,b );
    return 0;
}
