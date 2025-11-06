#include<stdio.h>
#include<stdlib.h>
void enqueue(int v,int q[],int f,int r){
    if(f==r==-1){
        f=0;
        r=0;
        q[r]=v;
    }
    else{
        r++;
        q[r]=v;
    }
}
void dequeue(int q[],int f,int r){

}
void bfs(int v,int s,int g[5][5]){
    #define max=10;
    int q[max];
    int vis[max];
    int f=-1;
    int r=-1;
    enqueue(s,q,f,r);
    vis[0]=s;
}
int main(){
    int v,s;
    printf("enter number of vertices: ");
    scanf("%d",&v);
    int g[5][5];
    printf("enter starting vertex: ");
    scanf("%d",&s);
    printf("enter adjacency matrix: ");
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            printf("v[%d][%d]: ",i,j);
            scanf("%d",&g[i][j]);
        }
    }
    bfs(v,s,g);
}