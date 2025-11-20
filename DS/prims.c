#include<stdio.h>
#include<limits.h>
#define MAX 100
int main(){
    int graph[MAX][MAX],i,j,u,v,w,n,min=INT_MAX,visited[MAX]={0},cost=0,e=1;
    printf("enter the number of vertices:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&graph[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(graph[i][j]==0){
                graph[i][j]=INT_MAX;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(graph[i][j]<min){
                min=graph[i][j];
                u=i;
                v=j;
            }
        }
    }
    visited[u]=1;
    visited[v]=1;
    cost+=min;
    printf("{%d,%d}->%d\n",u,v,graph[u][v]);
    while(e<n-1){
        min=INT_MAX;
        for(i=0;i<n;i++)
        {
            if(visited[i]==1){
                for(j=0;j<n;j++)
                {
                    if(graph[i][j]<min&&visited[j]==0){
                        min=graph[i][j];
                        u=i;
                        v=j;
                    }
                }
            }
            
        }
        if(min==INT_MAX){
            printf("graph disconnected");
            return 0;
        }
        visited[v]=1;
        cost+=min;
        e++;
        printf("{%d,%d}->%d\n",u,v,graph[u][v]);

    }
    printf("Total cost: %d",cost);
    return 0;

}