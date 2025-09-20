#include<stdio.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};

void sortbymarks(struct Student s[],int n){
    struct Student temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].marks>s[j+1].marks){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct Student s[n];

    for(int i=0;i<n;i++){
        printf("Enter the details of %d student:",i+1);
        printf("Name:");
        scanf("%s",&s[i].name);
        printf("Roll:");
        scanf("%d",&s[i].roll);
        printf("Marks:");
        scanf("%f",&s[i].marks);
    }
    sortbymarks(s,n);
    printf("\n students sorted by marks:\n");
    for(int i=0;i<n;i++){
        printf("Name:%s, Roll:%d, Marks:%.2f\n",s[i].name,s[i].roll,s[i].marks);
    }
    return 0;
}
