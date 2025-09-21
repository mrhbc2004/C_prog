#include<stdio.h>
#include<string.h>

void reverse_str(char *str){
    int i,j;
    int len=strlen(str);
    char temp;
    
    for(i=0,j=len-1;i<j;i++,j--){
       // with using temp variable
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        // without using temp variable
        // str[i]=str[i]+str[j];
        // str[j]=str[i]-str[j];
        // str[i]=str[i]-str[j];

        // with using XOR operations
        // str[i]=str[i]^str[j];
        // str[j]=str[i]^str[j];
        // str[i]=str[i]^str[j];

    }
}
int main(){
    char mystr[]="Hello Harisha";
    printf("String before reversing:%s\n",mystr);
    reverse_str(mystr);
    printf("String after reversing:%s\n",mystr);

    return 0;
}
