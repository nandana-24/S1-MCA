#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *rchild;
    struct node *lchild;
};
struct node *root=NULL,*new,*ptr1;
struct node *createnode(int n)
{   
    new=(struct node*)malloc(sizeof(struct node));
    new->data=n;
    new->rchild=NULL;
    new->lchild=NULL;
    return new;
}
void insert(int n)
{
    struct node *ptr=root;
    if(root==NULL)
    {
        root=createnode(10);
    }
    while(ptr!=NULL)
    {
        if(new->data<ptr->data)
        {
            ptr1=ptr;
            ptr=ptr->lchild;
        }
        else if(new->data>ptr->data)
        {
            ptr1=ptr;
            ptr=ptr->rchild;
        }
        else
        {
            printf("data exists");
        }
    }
    if(ptr==NULL)
    {
        ptr=createnode(20);
        if(ptr->data<ptr1->data)
        {
            ptr=ptr1->lchild;
        }
        else
        {
            ptr=ptr1->rchild;
        }
    }
}
