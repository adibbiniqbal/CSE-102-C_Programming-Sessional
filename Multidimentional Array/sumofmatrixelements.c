#include<stdio.h>
int main(){
    int r,c,sum=0;
    printf("Enter row and column number of matrix : ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter elements of matrix : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    printf("The sum is %d", sum);
    return 0;
}

