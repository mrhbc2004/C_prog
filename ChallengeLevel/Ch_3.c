#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *source, *target;
    char sourcefile[100],targetfile[100];
    char ch;
    printf("Enter the source file name:");
    scanf("%s",sourcefile);
    printf("Enter the target file name:");
    scanf("%s",targetfile);
    //open source file 
    source=fopen(sourcefile,"r"); //You must create the file in the current working directory before and then run the code 
    if(source==NULL){
        printf("Cannot open source file:%s\n",sourcefile);
        exit(1);
    }
    //open target file
    target=fopen(targetfile,"w");
    if(target==NULL){
        printf("cannot open target file:%s\n",targetfile);
        fclose(source);
        exit(1);
    }

    //copy character by character
    while((ch=fgetc(source))!=EOF){
        fputc(ch,target);
    }
    printf("\nFile copied successfully\n");
    fclose(source);
    fclose(target);
    
    return 0;
}
