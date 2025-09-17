#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int start,end,ispalindrome=1;

    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0'; //remove newline

    start=0;
    end=strlen(str)-1;
    while(start<end){
        if(str[start]!= str[end]){
            ispalindrome=0;
            break;
        }
        start++;
        end--;
    }
    if(ispalindrome) printf("The string is a palindrome\n");
    else printf("The string is not palindrome");
    return 0;
}
