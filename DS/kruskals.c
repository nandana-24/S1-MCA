#include<stdio.h>
#include<limits.h>
#define MAX 100
int i,j,u,v,n,min,graph[MAX][MAX],parent[MAX];
int find(int x, int parent[]){
    if(parent[x]==x){
        return x;
    }
    else{
        return find(parent[x],parent);
    }
}
int Union(int x,int y,int parent[]){
    u=find(x,parent);
    v=find(y,parent);
    if(u==v){
        return 0;
    }
    else{
        parent[v]=u;
        return 1;
    }
}
void kruskal(){
    int cost=0,e=0,u=-1,v=-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&graph[i][j]);}}
    for(i=0;i<n;i++){
        parent[i]=i;
    }
    while(e<n-1){
        min=INT_MAX;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++){
                if(graph[i][j]<min && graph[i][j]!=0){
                    min=graph[i][j];
                    u=i;
                    v=j;
                }
            }
        }
        if(u==-1){
            printf("graph is disconnected");
            break;
        }
            graph[u][v]=INT_MAX;
            graph[v][u]=INT_MAX;
            if(Union(u,v,parent))
            {
                // result[u][v]=min;
                // result[v][u]=min;
            printf("{%d,%d}->%d\n",u,v,min);
                cost+=min;
                e++;

            }
    }
    printf("Total cost : %d\n",cost);

}

int main(){
    printf("enter the number of vertices:");
    scanf("%d",&n);
    kruskal();
}