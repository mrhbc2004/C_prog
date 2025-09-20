#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front=-1,rear=-1;

int isFull(){
    return (rear==SIZE-1);
}
int isEmpty(){
    return (front==-1);
}

void enqueue(int value){
    if(isFull()){
        printf("\nQueue is Full!!\n");
    }
    else{
        if(front==-1) front =0;
        rear++;
        queue[rear]=value;
    }
}

int dequeue(){
    int value;
    if(isEmpty()){
        printf("\nQueue is Empty!!!\n");
        return -1;
    }
    else{
        value=queue[front];
        if(front==rear) front=rear=-1;
        else front++;
        printf("Dequeued value is %d\n",value);
    }
    return value;
}

int peek(){
    int value;
    if(isEmpty()){
        printf("\nQueue is Empty!!!\n");
    }
    else{
        value=queue[front];
    }
    return value;
}

void display(){
    if(isEmpty()){
        printf("\n Queue is Empty!!\n");
    }
    else{
        int value,i;
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    enqueue(6);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}
