#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node* head=NULL; // head pointer

void insertEnd(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    if(head == NULL){
        head=newnode;
    }
    else{
        struct node* temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void insertBegin(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}

void deletenode(int value){
    struct node* temp=head;
    struct node* prev=NULL;

    if(temp!=NULL && temp->data==value){
        head=temp->next;
        free(temp);
        return ;
    }

    while(temp!=NULL && temp->data!=value){
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL) return; // value not found

    prev->next=temp->next;
    free(temp);
}

void display(){
    struct node* temp=head;
    if(temp==NULL){
        printf("List is Empty\n");
        return;
    }
    printf("Linked List: ");
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(){
    insertEnd(10);
    insertEnd(20);
    insertBegin(5);
    insertEnd(30);
    display();

    deletenode(20);
    display();

    deletenode(100);  // value not found
    display();

    return 0;
}
