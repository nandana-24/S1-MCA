#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node * createNode(int v){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=v;
    new->next=NULL;
    return new;
}
void insertAtBeginning(int v){
    struct node *new=createNode(v);
    if(head==NULL){
        head=new;
    }
    else{
        new->next=head;
        head=new;
    }
}
void insertAtEnd(int v){
    struct node* new=createNode(v);
    struct node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new;
}
void display(){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtEnd(39);
    display();
}