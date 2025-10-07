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
        printf("Deleted data: %d",ptr->data);
        free(ptr);
    }
void deleteAtEnd(){
    if(head==NULL){
            printf("Can't delete from beginning. List is empty\n");
        }
        struct node *ptr=head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        printf("Deleted data: %d",ptr->next->data);
        free(ptr->next);
        ptr->next=NULL;
}
void deleteAtPos(){
    int p;
    printf("Enter the position to be deleted: ");
    scanf("%d",&p);
    struct node *ptr=head;
    for(int i=0;i<p-1;i++){
        ptr=ptr->next;
    }
    struct node *temp=ptr->next;
    ptr->next=ptr->next->next;
    ptr->next->prev=ptr;
    printf("Deleted data: %d",temp->data);
    free(temp);
}
void search(int val){
    struct node *ptr=head;
    int flag=0;
    for(int i=0;ptr!=NULL;i++){
        if(val==ptr->data){
            printf("Element found at %d th position\n",i);
            flag=1;
            break;
        }
        else{
            ptr=ptr->next;
        }
    }
        if(flag==0){
            printf("Element not found\n");
        }
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
    do
    {
        printf("\nDOUBLY LINKED LIST OPERATIONS \n");
        printf("1 : display \n");
        printf("2 : Insert at Beginning \n");
        printf("3 : Insert at End \n");
        printf("4 : insert at pos \n");
        printf("5 : delete at begining \n");
        printf("6 : delete at end \n");
        printf("7 : delete at pos \n");
        printf("8 : Search an element \n");                               
        printf("9 : Exit \n");

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
            printf("enter the value to be inserted");
            scanf("%d",&v);
            printf("enter the position to be inserted");
            scanf("%d",&p);
            insertAtMiddle(v,p);
            break;
        case 5:
            deleteAtBeginning();
            break;
        case 6:
            deleteAtEnd();
            break;
        case 7:
            deleteAtPos();
            break;
        case 8:
        printf("Enter the element to be searched: ");
            scanf("%d",&p);
            search(p);
        default:
        
            break;
        }
    }while(choice<9);
    return 0;
}