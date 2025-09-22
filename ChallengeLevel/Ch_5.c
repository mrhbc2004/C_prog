#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

//Insert at end
void insertend(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    struct node* temp=head;
    if(head==NULL){
        head=newnode;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

//Display linked list
void display(){
    struct node* temp=head;
    printf("Linked list :\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

//Reverse the linked list
void reverse(){
    struct node* curr=head;
    struct node* prev=NULL;
    struct node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
int main(){
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    printf("Original linked list :\n");
    display();
    reverse();
    printf("Reverse list:\n");
    display();
    return 0;
}
