#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter row and column number of first matrix : ");
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    printf("Enter elements of first matrix : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter row and column number of second matrix : ");
    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    printf("Enter element of second matrix : \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    int mat[r1][c2];
    if(c1!=r2) printf("Multipication not possible");
    else{
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                mat[i][j]=0;
                for(int k=0;k<c1;k++){
                    mat[i][j] += mat1[i][k]*mat2[k][j];
                }
            }
        }
    printf("Multipication of matricies is : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
} 