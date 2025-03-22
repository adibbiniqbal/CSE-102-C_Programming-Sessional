#include<stdio.h>
int main(){
    int r,c,temp;
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
        for(int j=0;j<c;j++){
            if(i<j){
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

