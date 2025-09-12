#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int arr[num];
    arr[0]=0; // first two elements need to be instantiated to 0 and 1
    arr[1]=1;
    for(int i=2;i<num;i++){
        arr[i]=arr[i-1]+arr[i-2];   
    }
    for(int i=0;i<num;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
