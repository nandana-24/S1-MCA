#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node * createNode(int v){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=v;
    new->next=NULL;
    return new;
}
void enqueue(int val){
    struct node *new=createNode(val);
    if(rear==NULL){
        front=rear=new;
    }
    else{
        rear->next=new;
        rear=new;
    }
}
void dequeue(){
    if(rear==NULL){
        printf("Queue is empty\n");
    }
    else if(front->next==NULL){
        printf("Deleted element:%d\n",front->data);
        free(front);
        front=rear=NULL;
    }
    else{
        struct node *ptr=front;
        printf("Deleted element:%d\n",front->data);
        front=ptr->next;
        free(ptr);
    }
}
void display(){
    struct node *ptr=front;
    if(ptr==NULL){
        printf("List is empty. No elements to be displayed\n");
        return;
    }
    while(ptr!=NULL){
        printf("Elements are:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    int ch,val;
    do{
        printf("enter 1 for enqueue operation\n 2 for dequeue operation\n 3 to display elements\n 4 to exit\n enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter the value to be inserted:");
            scanf("%d",&val);
            enqueue(val);
            break;

            case 2:
            dequeue();
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