#include<stdio.h>
#define MAX_SIZE 5
int f=-1,r=-1;
int cirque[MAX_SIZE];
void enqueue()
{
    int n;
        printf("enter the no to be inserted:");
        scanf("%d",&n);
    if((r+1)%MAX_SIZE==f)
    {
        printf("queue is full");
    }
    else if(r==-1&&f==-1)
    {
        r=(r+1)%MAX_SIZE;
        f++;
        cirque[r]=n;
    }
    else
    {
        r=(r+1)%MAX_SIZE;
        cirque[r]=n;
    }
}
void display()
{
     int i = f;
    while(1){
        printf("%d",cirque[i]);
        if(i == r)
            {break;}
        i = (i + 1) % MAX_SIZE;
}
void dequeue()
{
    if(f==-1)
    {
        printf("queue is empty");
    }
    else if(f==r)
    {
        printf("deleted element is %d",cirque[f]);
        f=r=-1;
    }
    else
    {
        printf("deleted element is %d\n",cirque[f]);
        f=(f+1)%MAX_SIZE;
    }
}
int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    dequeue();
    display();
    enqueue();
    display();
    dequeue();
    display();
}