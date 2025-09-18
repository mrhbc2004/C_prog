#include<stdio.h>
void sortarray(int *arr,int n){
    int temp;
    for (int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(*(arr+j-1)>*(arr+j)){
                temp=*(arr+j-1);
                *(arr+j-1)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    sortarray(arr,n);
    printf("\nArray after sorting\n");

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
