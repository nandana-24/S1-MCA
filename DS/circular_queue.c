#include<stdio.h>
<<<<<<< HEAD
void enqueue(int queue[],int *front,int *rear,int size){
    int val;
    if(front==(rear+1)%size){
        printf("Queue is full");
        return;
    }
    else if(front==-1 && rear==-1){
        printf("enter the element to be added: ");
        scanf("%d",&val);
        rear=(rear+1)%size;
        queue[rear]=val;
        front=0;
    }
    else{
        printf("enter the element to be added: ");
        scanf("%d",&val);
        rear=(rear+1)%size;
        queue[rear]=val;
    }
}
void dequeue(int queue[],int *front,int *rear,int size){
    if(front==-1){
        printf("Queue is empty");
    }
    else if(front==rear){
        printf("Element to be deleted: %d",queue[front]);
        front==rear==-1;
    }
    else{
        printf("Element to be deleted: %d",queue[front]);
        front=(front+1)%size;
    }
}
void display(int front,int rear,int queue[]){
    if(front==-1){
        printf("Queue is empty");
    }
    else{
        printf("Elements are: \n");
    for(int i=front;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}
}
int main(){
    int size;
    printf("enter the size of the queue: ");
    scanf("%d",&size);
    int queue[size];
    int front=-1,rear=-1;
    enqueue(queue,&front,&rear,size);
    //dequeue(queue,front,rear,size);
    display(front,rear,queue);
    return 0;
=======
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
>>>>>>> 229e43708c99795e0c653a2440ff3ff995e31ed1
}