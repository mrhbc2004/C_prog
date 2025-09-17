#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int maxlen=0;

    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    char *word=strtok(str," ");
    char longest[200];
    while(word != NULL){
        int len=strlen(word);
        if(len>maxlen){
            maxlen=len;
            strcpy(longest,word);
        }
        word = strtok(NULL," ");
    }
    printf("Longest word:%s\n",longest);
    printf("Length:%d\n",maxlen);
    return 0;
}
