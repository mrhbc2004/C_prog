/* This question was asked in Renesas Online assessment 
there will be a string of characters given with space separated like 2 3 4 5 6 7 8 9 10 A J Q K
for which there will be a number assigned like +1,-1,0
2 to 6-> +1
7 to 9-> 0
10-> -1
A,J,Q,K-> -1

*/

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
