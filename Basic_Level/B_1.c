#include<stdio.h>
int main(){
    int num,num1;
    int remainder=0,reverse=0;

    printf("Enter the number:");
    scanf("%d",&num);
    num1=num;
    while(num1!=0){
        remainder=num1%10;
        reverse=reverse*10+remainder;
        num1=num1/10;
    }
    // if(num==reverse){
    //     printf("Palindrome");
    // }
    // else{
    //     printf("not a palindrome");
    // }
    if(num<0){
        printf("The entered number is negative and not a palindrome");
    }
    else {
        printf("%d is %s palindrome",num,(num==reverse)?"a":"not a");
    }
    return 0;

}

