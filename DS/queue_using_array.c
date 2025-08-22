#include<stdio.h>
#define max 6
int f=-1,r=-1;
int queue[max];
void enqueue(int x)
{
    if (r==max-1)
    {
        printf("overflow");
    }
    else if(r==-1&&f==-1)
    {
        r=0;
        f=0;
        queue[r]=x;
    }
    else
    {
        r++;
        queue[r]=x;
    }
}
void dequeue()
{
    if(f==-1)
    {
        printf("underflow");
    }
    else if(f==r)
    {
        printf("%d",queue[f]);
        f=-1;
        r=-1;
    }
    else
    {
        printf("%d",queue[f]);
        f++;
    }
}
void display()
{
    int i;
    for(i=f;i<=r;i++)
    {
        printf("%d\n",queue[i]);
    }
}
int main()
{
    int ch,val;
    printf("1 for insert,2 for delete,3 for display");
    do{
        printf("\nenter the choice");
        scanf("%d",&ch);
        switch(ch)
    {
        case 1:
        printf("enter the no:");
        scanf("%d",&val);
        enqueue(val);
        break;

        case 2:
        dequeue();
        break;

        case 3:
        display();
        break;

        default:
        printf("invalid");

    }
}while(ch<4);
}