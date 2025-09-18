#include<stdio.h>
#include<string.h>

void reversestring(char *str){
    char *start=str;
    char *end=str+strlen(str)-1;
    char temp;

    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
    char str[200];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0'; //Remove newline

    // char *ptr=&str;
    printf("Before reversing the string:%s\n",str);
    reversestring(str);
    printf("Reversed String is :%s\n",str);
    return 0;
}
