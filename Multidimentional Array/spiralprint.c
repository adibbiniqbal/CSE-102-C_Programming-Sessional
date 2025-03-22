#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and column of matrix : ");
    scanf("%d %d", &r, &c);
    int rmin=0, rmax=r-1, cmin=0, cmax=c-1, count= r*c;
    int mat[r][c];
    printf("Enter elements of matrix : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    while(count){
        for(int j=cmin;j<=cmax;j++){
            printf("%d ",mat[rmin][j]);            
            count--;
        }
        rmin++;
        for(int i=rmin;i<=rmax;i++){
            printf("%d ",mat[i][cmax]);
            count--;
        }
        cmax--;
        for(int j=cmax;j>=cmin;j--){
            printf("%d ",mat[rmax][j]);            
            count--;
        }
        rmax--;
        for(int i=rmax;i>=rmin;i--){
            printf("%d ",mat[i][cmin]);
            count--;
        }
        cmin++;
    }
    return 0;
}