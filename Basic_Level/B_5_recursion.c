#include<stdio.h>
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    else 
    return fib(n-1)+fib(n-2);
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int arr[num];

    for(int i=0;i<num;i++){
        printf("%d\t",fib(i));
    }

    return 0;
}
