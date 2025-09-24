#include<stdio.h>
int main(){
    int a=50;
    int * ptr=&a;
    printf("value of a :%d\n",a);
    printf("value of ptr :%d\n",ptr);
    printf("address of a :%d\n",&a);
    printf("value pointing by ptr :%d\n",*ptr+1);

    return 0;
}
