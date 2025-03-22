#include<stdio.h>
int main(){
    int r,c,max=0,currentmax, imax;
    printf("Enter row and column number of matrix : ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter elements of matrix : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        currentmax=0;
        for(int j=0;j<c;j++){
            currentmax+=mat[i][j];
        }
        max = currentmax>max ? currentmax,imax=i : max;
    }
    for(int j=0;j<c;j++){
        printf("%d ", mat[imax][j]);
    }
    return 0;
}

