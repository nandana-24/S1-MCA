#include<stdio.h>
#define MAX 100
int graph[MAX][MAX];
int visited[MAX];
int main(){
    int i,j,n,k,count=0,cycle=0;
    printf("enter the no of vertices:");
    scanf("%d",&n);
    printf("enter the matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&graph[i][j]);
        }
    }
    for(i=0;i<n;i++){
        visited[i]=0;
    }
    int flag=0;
    while(count<n){
        cycle=0;
    for(i=0;i<n;i++){
        flag=0;
        if(visited[i]==0){
        for(j=0;j<n;j++){
            if(graph[j][i]==1)
            {
                flag=1;
                break;
            }
        }
        if(!flag){
            printf("%d\t",i);
            visited[i]=1;
            count++;
            cycle=1;
            for(k=0;k<n;k++){
                graph[i][k]=0;
            }
        }
    }
    }
    if(!cycle){
        printf("\ncycle detected");
        break;
    }
}
}