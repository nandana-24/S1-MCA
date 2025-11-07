#include<stdio.h>
int stack[10];
int top=-1;
int vis[10]={0};
void push(int v){
    top++;
    stack[top]=v;
}
void pop(){
    int a=stack[top];
    top--;
}
void dfs(int v,int s,int g[6][6]){
    printf("DFS Traversal\n");
    push(s);
    int flag=0;
    printf("%d\t",s);
    vis[s]=1;
    while(top!=-1){
        flag=0;
        for(int i=1;i<=v;i++){
            if(g[s][i]==1 && !vis[i]){
                push(i);
                printf("%d\t",i);
                flag=1;
                vis[i]=1;
                s=i;
                break;
            }
        }
        if(flag==0){
            pop();
            if(top!=-1){
                s=stack[top];
            }
        }
    }
}
int main(){
    int s,v;
    int g[6][6];
    printf("enter number of vertices: ");
    scanf("%d",&v);
    printf("enter starting vertex: ");
    scanf("%d",&s);
    printf("enter the matrix: ");
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            printf("v[%d][%d]: ",i,j);
            scanf("%d",&g[i][j]);
        }
    }
    dfs(v,s,g);
}
