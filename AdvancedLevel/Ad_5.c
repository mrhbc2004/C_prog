#include<stdio.h>
#include<stdlib.h> //for malloc and free
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    // dynamically allocate memory based on number of elements
    int *arr=(int *)malloc(n*sizeof(int)); // malloc returns a void pointer which needs to be typecasted to int pointer

    // check if memory allocation was successful
    if(arr==NULL){
        printf("Memory allocation failed\n");
        return 1; //exit program
    }

    // take input
    printf("Enter the %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //calculate sum
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    // calculate average
    float avg=(float)sum/n;
    printf("The average is :%.2f\n",avg);
    // free allocated memory
    free(arr);
    return 0;
}
