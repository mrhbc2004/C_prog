#include<stdio.h>
#include<string.h>
struct  student
{
    int id;
    char name[50];
    float marks;
};
int main(){
    struct student s1;
    struct student* ptr=&s1;
    s1.id=101;
    strcpy(s1.name,"harisha");
    s1.marks=90.00;
    printf("using . operator\n");
    printf("ID:%d\n",s1.id);
    printf("Name:%s\n",s1.name);
    printf("Marks:%.1f\n",s1.marks);
    printf("Using -> operator\n");
    printf("ID:%d\n",ptr->id);
    printf("Name:%s\n",ptr->name);
    printf("Marks:%.1f\n",ptr->marks);


    return 0;
}
