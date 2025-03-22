#include<stdio.h>
int main(){
    int r,c;
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
        if(i&1){
            for(int j=c-1;j>=0;j--){
                printf("%d ",mat[i][j]);
            }
        }
        else{
            for(int j=0;j<c;j++){
                printf("%d ",mat[i][j]);
            }
        }
    }
    return 0;
}