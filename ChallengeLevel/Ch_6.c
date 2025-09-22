#include<stdio.h>
#include<stdlib.h>// for exit()
#include<ctype.h> //for isdigit()
#include<string.h>

#define MAX 100
int stack[MAX];
int top=-1;

void push(int x){
    if(top==MAX-1){
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top]=x;
}

int pop(){
    if(top==-1){
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}
int evaluatepostfix(char *expr){
    for(int i=0;expr[i]!='\0';i++){
        char ch=expr[i];
        if(isdigit(ch)){
            push (ch -'0');//convert char digit to int and push
        }
        else if(ch==' '){
            continue; //ignore spaces
        }
        else{
            int val1=pop();
            int val2=pop();
            switch (ch){
                case '+': push(val2 + val1);break;
                case '-': push(val2 - val1);break;
                case '*': push(val2 * val1);break;
                case '/': push(val2 / val1);break;
                case '%': push(val2 % val1);break;
                default: printf("Invalid operator%c\n",ch);exit(1);
            }
        }
    }
    return pop();
}

int main(){
    char expr[100];
    printf("Enter a postfix expression(single digit operands,space separated):"); //format of giving the input op1_op2_operator
    fgets(expr,sizeof(expr),stdin);
    expr[strcspn(expr,"\n")]='\0'; //remove newline
    int result=evaluatepostfix(expr);
    printf("Result of the postfix evaluation is:%d\n",result);
    
    return 0;
}
