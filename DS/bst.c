#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *rchild;
    struct node *lchild;
};
struct node *root=NULL,*new;
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
    struct node *ptr1=root;
    new=createnode(n);   

    if(root==NULL)
    {
        root=new;
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
         if(ptr==NULL)
    {
        if(new->data<ptr1->data)
        {
            ptr1->lchild=new;
        }
        else
        {
            ptr1->rchild=new;
        }
    }
    }

}
void preorder(struct node* root) 
{
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}
int main() {

    insert(30);
    insert(70);
    insert(20);
    insert(40);
    insert(60);
    insert(80);
    preorder(root);
}