#include <stdio.h>
#include <stdlib.h>
//Create an M x N matrix and re print it
int main(){
    int m,n;
    int matrix[5][5];
    printf("Enter the order of the matrix (Ex: 2,3) :");
    scanf("%d,%d",&m,&n);
    printf("Enter matrix elements...\n");

    //get inputs
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    //print matrix
    printf("Print matrix elements...\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

