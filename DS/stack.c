#include<stdio.h>
#define max 3
int top=-1,i;
int stack[max];    
void push(int x){
        if(top==max-1){
            printf("Stack overflow");
        }
        else{
            top++;
            stack[top]=x;
        }
    }
    void pop(){
        if(top==-1){
            printf("Stack underflow");
        }else{
            printf("%d\n",stack[top]);
            top=top-1;
        }
    }
    void display(){
        if(top==-1){
            printf("Empty stack");
        }
        else{
        for(i=0;i<=top;i++)
        {
            printf("%d\n",stack[i]);
        }}
    }
int main(){
    int ch,val;
    printf("1 for push, 2 for pop, 3 to display, 4 to exit.");
    do{
        printf("\n enter the choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter the element u wanna push");
            scanf("%d",&val);
            push(val);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            default:
            printf("invalid");
            break;
        }
    }
    while(ch<4);
    return 0;
}


    