#include<stdio.h>
//swapping of two numbers
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//recursive function to generate permutations
void permute(int arr[],int l, int r){
    if(l==r) {
        //print permutation
        for(int i=0;i<=r;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    else{
        for(int i=l;i<=r;i++){
            swap(&arr[l],&arr[i]); //fix one element
            permute(arr,l+1,r);
            swap(&arr[l],&arr[i]);//backtrack
        }
    }
}
int main(){
    int arr[4]={2,4,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("All permutations of the array:\n");
    permute(arr,0,n-1);
    
    return 0;
}
