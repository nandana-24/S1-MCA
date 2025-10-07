#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;//self referential pointer
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
// void insertAtMiddle(int v,int p){
//     struct node* new=createNode(v);
//     struct node *ptr=head;
//     int i;
//     for(i=1;i<p-1;i++){
//         ptr=ptr->next;
//     }
//     new->next=ptr->next;
//     ptr->next=new;
// }
void insertAtMiddle(int v,int p){
    struct node* new=createNode(v);
    struct node *ptr=head;
    if(p==1&&head==NULL){
        insertAtBeginning(v);
    }
    for(int i=1;i<p-1&&ptr!=NULL;i++){
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
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    printf("Deleted element: %d\n",ptr->next->data);
    ptr->next=NULL;
}
void deleteAtMiddle(int p){
    struct node *ptr=head;
    for(int i=1;i<p-1;i++){
        ptr=ptr->next;
    }
    struct node *temp=ptr->next;
    printf("Deleted element: %d\n",temp->data);
    ptr->next=temp->next;
}
void search(int val){
    struct node *ptr=head;
    int flag=0;
    for(int i=1;ptr!=NULL;i++){
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
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
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
        printf("7 : delete at middle \n");
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
            printf("Enter the position to be deleted: ");
            scanf("%d",&p);
            deleteAtMiddle(p);
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