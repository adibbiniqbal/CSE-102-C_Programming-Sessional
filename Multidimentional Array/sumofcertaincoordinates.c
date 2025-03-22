#include<stdio.h>
int main(){
    int r,c,sum=0,i1,i2,j1,j2;
    printf("Enter row and column number of matrix : ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter elements of matrix : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Enter first coordinates : ");
    scanf("%d %d", &i1, &j1);
    printf("Enter second coordinates : ");
    scanf("%d %d", &i2, &j2);

    for(int i=i1;i<=i2;i++){
        for(int j=j1;j<=j2;j++){
            sum += mat[i][j];
        }
    }
    printf("The sum is %d", sum);
    return 0;
}

