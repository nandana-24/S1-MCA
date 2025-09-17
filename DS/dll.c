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
        new->next->prev=new;
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
void insertAtMiddle(int v,int p){
    struct node *new=createNode(v);
    struct node *ptr=head;
    if(head==NULL){
        head=new;
    }
    else{
    for(int i=0;i<p-1&&ptr!=NULL;i++){
        ptr=ptr->next;
    }
    new->next=ptr->next;
    ptr->next=new;
    new->prev=ptr;
    new->next->prev=new;
}
}
    void deleteAtBeginning(){
        if(head==NULL){
            printf("Can't delete from beginning. List is empty\n");
        }
        struct node *ptr=head;

        ptr->next->prev=NULL;
        head=ptr->next;
        free(ptr);
    }
void display(){
    struct node *ptr=head;
    if(ptr==NULL){
        printf("List is empty. No elements to show");
    }
    else{
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}   
}
int main()
{
    int choice=1;
    int v;
    int p;
    while (choice)
    {
        printf("\nDOUBLY LINKED LIST OPERATIONS \n");
        printf("1 : display \n");
        printf("2 : Insert at Beginning \n");
        printf("3 : Insert at End \n");
                printf("4 : delete at begining \n");
                        printf("5 : delete at end \n");
        printf("6 : insert at pos \n");
                printf("7 : delete at pos \n");
                               


        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            printf("enter the value to be inserted");
            scanf("%d",&v);
            insertAtBeginning(v);
            break;
        case 3:
            printf("enter the value to be inserted");
            scanf("%d",&v);
            insertAtEnd(v);
            break;
        case 4:
            deleteAtBeginning();
            break;
        /*case 5:
            deleteA();
            break;*/
        case 6:
            printf("enter the value to be inserted");
            scanf("%d",&v);
            printf("enter the position to be inserted");
            scanf("%d",&p);
            insertAtMiddle(v,p);
            break;
        /*case 7:
            deleteAtPos();
            break;*/

       
        default:
            break;
        }

    }
    
    return 0;
}