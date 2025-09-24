#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int *ptr=&a;
    int *ptr1=&b;
    printf("Before swapping the variables a and b:%d\t%d\n",a,b);
    printf("swapping done\n");
    int temp=*ptr;
    *ptr=*ptr1;
    *ptr1=temp;
    printf("After swapping the variables a and b:%d\t%d\n",a,b);

    return 0;
}
