#include<stdio.h>
// Bubble sort
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
 
//Insertion sort
void insertionsort(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
        int key =arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

//Selection Sort
void selectionsort(int arr[],int n){
    int minindex;
    for(int i=0;i<n-1;i++){
        minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
}

int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%d",&ar[i]);
    }
    printf("before sorting the array is \n");
    for(int i=0;i<n;i++){
        printf("%d\t ",ar[i]);
    }
    printf("\nAfter sorting -- bubble sort\n");
    bubblesort(ar,n);
    for(int i=0;i<n;i++){
        printf("%d\t ",ar[i]);
    }
    printf("\nAfter sorting -- insertion sort\n");
    insertionsort(ar,n);
    for(int i=0;i<n;i++){
        printf("%d\t ",ar[i]);
    }
    printf("\nAfter sorting -- selection sort\n");
    selectionsort(ar,n);
    for(int i=0;i<n;i++){
        printf("%d\t ",ar[i]);
    }
    
    return 0;
}
