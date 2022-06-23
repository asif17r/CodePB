#include<stdio.h>
int max(int a, int b, int c){
    //this function returns the maximum of a b & c
    if(a >= b && a >= c) return a;
    if(b >= a && b >= c) return b;
    if(c >= a && c >= b) return c;
}
int main(){
    printf("Enter the value of n\n");
    int n; 
    scanf("%d",&n);
    int A[n][n],B[n][n],C[n][n],D[n][n];
    printf("Enter the matrix A:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the matrix B:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("Enter the matrix C:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&C[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            D[i][j] = max(A[i][j], B[i][j], C[i][j]);
        }
    }
    printf("D = \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ",D[i][j]);
        }
        printf("\n");
    }
}