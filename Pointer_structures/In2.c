#include<stdio.h>
#include<string.h>
struct Book{
    char title[50];
    char author[50];
    int price;
};
int main(){
    struct Book s1;
    struct Book s2;
    struct Book s3;
    struct Book arr[3]={s1,s2,s3};
    strcpy(s1.title,"Rich dad poor dad");
    strcpy(s1.author,"Robert Kiyosaki");
    s1.price=1500;
    strcpy(s2.title,"Ram");
    strcpy(s2.author,"Amish");
    s2.price=200;
    strcpy(s3.title,"Contest");
    strcpy(s3.author,"Matthew reilly");
    s3.price=300;
    int max=s1.price;
    if(s2.price>max){
        if(s3.price>s2.price){
            max=s3.price;
        }
        else{
            max=s2.price;
        }
    }
    if(max==s2.price){
        printf("Title:%s\tAuthor:%s\tPrice:%d",s2.title,s2.author,s2.price);
    }
    else if(max==s3.price){
        printf("Title:%s\tAuthor:%s\tPrice:%d",s3.title,s3.author,s3.price);
    }
    else {
        printf("Title:%s\tAuthor:%s\tPrice:%d",s1.title,s1.author,s1.price);

    }

    
    return 0;
}
