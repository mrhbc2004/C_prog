#include<stdio.h>
int cal(char *s){
    int count=-1;
    while(*s!='\0'){
        if(*s>='2' && *s<='6') count+=1;
        else if(*s>='7' && *s<='9') count+=0;
        else if(*s=='10') count+=-1;
        else if(*s=='J'||*s=='Q'||*s=='K'||*s=='A') count+=-1;
        s++;
}
    return count;
}
int main(){
    char S[500];
    printf("Enter the string:");
    fgets(S,sizeof(S),stdin);
    int cnt=cal(S);
    printf("%d",cnt);
    return 0;
}
