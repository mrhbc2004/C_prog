#include<stdio.h>
#include<math.h>
int isPrime(int n){
    if(n<=0|| n==1){
        return 0; //negative, 0 and 1 are neither prime nor composite
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0; // if divisible then not a prime number
        }
    }
    return 1; // if all other conditions fail then it is prime
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("%d is %s Prime number",num, (isPrime(num)==1)?"a":"not a");
    return 0;
}
