#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of integers:");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    // printf("%d\n",ptr);
    for(int i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%d",(ptr+i));
    }
    // printf("%d\n",ptr);
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    ptr=NULL;
    return 0;
}
