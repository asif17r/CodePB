#include<stdio.h>
int min(int a, int b){
    if(a < b) return a;
    else return b;
}

int main(){  
    int n;
    scanf("%d", &n);
    int adj[n][n];
    int dist[n][n];
    for(int i= 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &adj[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            dist[i][j] = 1e9;
            if(adj[i][j] == 1) dist[i][j] = 1;
        }
    }
    for(int k=0; k < n;k++)
        for(int i=0;i < n; i++)
            for(int j=0; j < n; j++)
                dist[i][j]=min(dist[i][j], dist[i][k] + dist[k][j]);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(dist[i][j] == 1e9){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }
}
