#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node * createNode(int v){
    struct node* newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=v;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
struct node *root=NULL;
void insert(){
    int flag=0;
    struct node *ptr=root;
    struct node *ptr1=NULL;
    printf("enter the data to be inserted: ");
    int val;
    scanf("%d",&val);
    if(root==NULL){
        root=createNode(val);
        return;
    }
    else{
        while(ptr!=NULL && flag==0){
            //ptr1=ptr;
            if(ptr->data<val){
                ptr1=ptr;
                ptr=ptr->right;
            }
            else if(ptr->data>val){
                ptr1=ptr;
                ptr=ptr->left;
            }
            else{
                flag=1;
                printf("Element already exist\n");
                return;
            }
        }
    if(ptr==NULL){
            struct node * newn=createNode(val);
            if(ptr1->data<val){
            ptr1->right=newn;
        }
    else{
            ptr1->left=newn;
        }
        }
    }
}
struct node * successor(struct node *ptr){
    struct node *ptr1=NULL;
    ptr1=ptr->right;
    if(ptr1!=NULL){
        while(ptr1->left!=NULL){
            ptr1=ptr1->left;
        }
    printf("%d",ptr1->data);
    }
    else{
        printf("No inorder successor");
    }
    return ptr1;
    }
void delete(){
    int flag=0;
    struct node *ptr=root;
    struct node *ptr1=NULL;
    printf("enter the data to be deleted: ");
    int val;
    scanf("%d",&val);
    while(ptr!=NULL && flag==0){
            //ptr1=ptr;
            if(ptr->data<val){
                ptr1=ptr;
                ptr=ptr->right;
            }
            else if(ptr->data>val){
                ptr1=ptr;
                ptr=ptr->left;
            }
            else{
                flag=1;
            }
        }
        if(flag==0){
                printf("element doesn't exist");
                return;
            }
            if(ptr->left==NULL && ptr->right == NULL){
                if(ptr1->left==ptr){
                    ptr1->left=NULL;
                }
                else{
                    ptr1->right=NULL;
                }
            }
            else if(ptr->left!=NULL && ptr->right !=NULL){
                struct node *temp=successor(ptr);
                int newd=temp->data;
                delete(temp);
                ptr->data=newd;
                
            }
}
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root){
    if(root!=NULL){
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
int main(){
    int n,ch;
    printf("enter 1 to insert, 2 to delete and 3 to exit. enter your choice");
    scanf("%d",&ch);
    switch(ch){
        case 1:
    printf("How many elements do you want to insert? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        insert();

    printf("\nInorder Traversal:\n");
    inorder(root);
    printf("\n");

    printf("\nPreorder Traversal:\n");
    preorder(root);
    printf("\n");

    printf("\nPostorder Traversal:\n");
    postorder(root);
    printf("\n");
    case 2:
    successor(root);
    delete();
    printf("\nInorder Traversal:\n");
    inorder(root);
    printf("\n");
    break;
}
}
