#include<stdio.h>
int main(){
    // Linear Search 
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    int target,found=0;
    printf("Enter the target element:");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Target found at %d place",i+1);
            found=1;
        }
    }
    if(!found){
        printf("Target not found");
    }
    return 0;
}
