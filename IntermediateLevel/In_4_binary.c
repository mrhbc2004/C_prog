#include<stdio.h>
// Bubble sort to sort the array if unsorted 
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
// Function to implement binary search on the sorted array
int binarysearch(int arr[],int n,int target){
    int low=0,high=n-1;
    while(low<=high){ //<= is to check the last element also if the target is in last element
        int mid =(low+high)/2;
        if(arr[mid]==target){
            return mid; //target found
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    int t;
    printf("Enter the target element:");
    scanf("%d",&t);
    bubblesort(arr,n);
    int pos=binarysearch(arr,n,t);
    if(pos!=-1){
        printf("Element found at %d position",pos);
    }
    else{
        printf("Element not found");
    }
    return 0;
}
