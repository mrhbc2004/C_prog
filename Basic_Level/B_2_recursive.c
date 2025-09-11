#include<stdio.h>
int fact(int num){
    if(num<0){
        return -1;
    }
    else if (num==0){
        return 1;
    }
    else{
        return num * fact(num-1); // here the function is recursive and calling itself 
    }
}
int main(){
    long long res;
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    res=fact(n);
    printf("The factorial of %d is %lld",n,res);
}
