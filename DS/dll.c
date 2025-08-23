#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL;
struct node * createNode(int v){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->prev=NULL;
    new->next=NULL;
    new->data=v;
    return new;
}
void insertAtBeginning(int val){
    struct node *new=createNode(val);
    if(head==NULL){
        head=new;
    }
    else{
        new->next=head;
        head=new;
    }
}
void insertAtEnd(int v){
    struct node *new=createNode(v);
    struct node *ptr=head;
    if(head==NULL){
        head=new;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new;
        new->prev=ptr;
}
}

void display(){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }    
}
int main(){
    insertAtEnd(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    display();
    return 0;
} 