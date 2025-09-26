#include<stdio.h>
void markssort(int n,int smarks[n],int sid[n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(smarks[j]<smarks[j+1]){
                int temp=smarks[j];
                int tempid=sid[j];
                smarks[j]=smarks[j+1];
                sid[j]=sid[j+1];
                smarks[j+1]=temp;
                sid[j+1]=tempid;
            }
        }
    }
}
int main(){
    int smarks[6]={78,25,46,89,92,96};
    int sid[6]={6,24,4,12,9,1};
    printf("Before sorting\n");
    for(int i=0;i<6;i++){
        printf("Sid:%d\tSmarks:%d\n",sid[i],smarks[i]);
    }
    markssort(6,smarks,sid);
    printf("After sorting\n");
    for(int i=0;i<6;i++){
        printf("Sid:%d\tSmarks:%d\n",sid[i],smarks[i]);
    }
    return 0;
}
