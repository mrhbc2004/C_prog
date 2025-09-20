#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int isFull()
{
    return top == MAX - 1;
}
int isEmpty()
{
    return top == -1;
}

void push(int value)
{
    if (isFull())
    {
        printf("Stack Overflow! cannot push %d\n", value);
    }
    else
    {
        stack[++top] = value;
        printf("%d pushed into stack\n", value);
    }
}

int pop()
{
    int value;
    if (isEmpty())
    {
        printf("Stack underflow! cannot pop\n");
    }
    else
    {
        value = stack[top--];
    }
    return value;
}

int peek()
{
    int val = 0;
    if (isEmpty())
    {
        printf("No elements in the stack\n");
    }
    else
    {
        val = stack[top];
    }
    return val;
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack Elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    push(100);
    push(200);
    push(300);
    display();
    printf("The top element is %d\n", peek());
    printf("Popped element is %d\n", pop());
    push(350);
    display();
    return 0;
}
