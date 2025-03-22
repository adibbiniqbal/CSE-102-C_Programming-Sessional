#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter row and column number of first matrix : ");
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    printf("Enter elements of first matrix : ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter row and column number of second matrix : ");
    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    printf("Enter element of second matrix : ");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    if(r1==r2 && c1==c2){
        int mat[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            mat[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
        printf("\n");
    printf("Sum of the the two matrices is :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("order is not same, matrices cannot be added");
    }
    return 0;
}