#include<stdio.h>
#include<stdlib.h>
int q[10];
int f=0,r=-1;
int vis[10]={0};
void enqueue(int v){
        r++;
        q[r]=v;
}
int dequeue(){
        int a=q[f];
        f++;
        return a;
}
void bfs(int v,int s,int g[6][6]){
    enqueue(s);
    vis[s]=1;
    printf("BFS Traversal: \n");
    while(f<=r){
        int a=dequeue();
        printf("%d\t",a);
        for(int i=1;i<=v;i++){
            if(g[a][i]==1 && !vis[i]){
                enqueue(i);
                vis[i]=1;
            }
        }
    }
}
int main(){
    int v,s;
    printf("enter number of vertices: ");
    scanf("%d",&v);
    int g[6][6];
    printf("enter starting vertex: ");
    scanf("%d",&s);
    printf("enter adjacency matrix: ");
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            printf("v[%d][%d]: ",i,j);
            scanf("%d",&g[i][j]);
        }
    }
    bfs(v,s,g);
}