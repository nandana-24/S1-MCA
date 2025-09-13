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
void push(int val){
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
    if(ptr==NULL){
        printf("List is empty. No elements to be displayed");
        return;
    }
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    int ch,val;
    do{
        printf("enter 1 for push\n 2 for pop\n 3 to display elements\n 4 to exit\n enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter the value to be inserted:");
            scanf("%d",&val);
            push(val);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("Exit");
            break;

            default:
            printf("enter a valid choice");
        }
    }while(ch!=4);
    return 0;
}