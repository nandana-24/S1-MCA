#include<stdio.h>
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
}