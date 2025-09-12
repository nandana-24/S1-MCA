#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
struct node *createNode(int v){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=v;
    new->next=NULL;
    return new;
}
void push(){
    int val;
    printf("enter the value to be inserted:");
    scanf("%d",&val);
    struct node *new=createNode(val);
    if(top==NULL){
        top=new;
    }
    else{
        new->next=top;
        top=new;
    }
}
void pop(){
    if(top==NULL){
        printf("List is empty. Stack underflow\n");
    }
    else if(top->next==NULL){
        printf("Deleted element:%d\n",top->data);
        free(top);
        top=NULL;
    }
    else{
        struct node *ptr=top;
        printf("Deleted element:%d\n",top->data);
        top=ptr->next;
        free(ptr);
    }
}
void display(){
    struct node *ptr=top;
    printf("elements are:\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    push();
    push();
    push();
    push();
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
    return 0;
}