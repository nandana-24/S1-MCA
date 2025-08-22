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
void insertAtMiddle(int v,int p){
    struct node* new=createNode(v);
    struct node *ptr=head;
    for(int i=1;i<p-1;i++){
        ptr=ptr->next;
    }
    new->next=ptr->next;
    ptr->next=new;
}
void deleteAtBeginning(){
    struct node *ptr=head;
    printf("Deleted element: %d\n",ptr->data);
    head=ptr->next;
}
void deleteAtEnd(){
    struct node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    printf("Deleted element: %d\n",ptr->data);
    ptr->next=NULL;
}
void deleteAtMiddle(int p){
    struct node *ptr=head;
    struct node *temp=head;
    for(int i=0;i<p-1;i++){
        ptr=ptr->next;
        temp=temp->next;
    }
    ptr->next=temp->next->next;
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
    insertAtMiddle(78,2);
    display();
    //deleteAtBeginning();
    deleteAtEnd();
    deleteAtMiddle(2);
    display();
    return 0;
}