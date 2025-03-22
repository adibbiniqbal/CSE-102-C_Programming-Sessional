#include<stdio.h>
int main(){
    int r,c;
    printf("Enter order of matrix : ");
    scanf("%d", &r);
    c=r;
    int rmin=0, rmax=r-1, cmin=0, cmax=c-1, count=1;
    int mat[r][c];
    while(count<=r*c){
        for(int j=cmin;j<=cmax;j++){
            mat[rmin][j]=count++;
        }
        rmin++;
        for(int i=rmin;i<=rmax;i++){
            mat[i][cmax]=count++;
        }
        cmax--;
        for(int j=cmax;j>=cmin;j--){
            mat[rmax][j]=count++;
        }
        rmax--;
        for(int i=rmax;i>=rmin;i--){
            mat[i][cmin]=count++;
        }
        cmin++;
    }
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}