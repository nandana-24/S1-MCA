#include<stdio.h>
void insert(int v,int p,int a[],int num){
    int i;
        for(i=num;i>=p;i--){
           a[i+1]=a[i];      
        }
        a[i+1]=v;
    }
void delete(int p,int a[],int n){
    for(int i=p;i<n;i++){
        a[i]=a[i+1];
    }
     printf("\nArray elements after deletion\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void search(int a[],int v,int n){
    int flag=0,i;
    for(i=0;i<n;i++){
        if(a[i]==v){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("element found at %d th position\n",i+1);
    }
    else{
        printf("element not found\n");
    }
}
void display(int a[],int n){
    printf("\nArray elements\n");
    for(int i=0;i<n+1;i++){
        printf("%d\t",a[i]);
    }
}
int main(){
    int num,a[10],val,pos;
    printf("enter the number of elements in array:");
    scanf("%d",&num);
    printf("enter array elements:");
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    display(a,num);
    printf("enter the element and position where the element to be inserted respectively\n");
    scanf("%d\n%d",&val,&pos);
    insert(val,pos,a,num);
    display(a,num);
    printf("enter the position element to be deleted\n");
    scanf("%d",&val);
    delete(val,a,num);
    printf("enter the element to be searched");
    scanf("%d",&val);
    search(a,val,num);
    return 0;
}