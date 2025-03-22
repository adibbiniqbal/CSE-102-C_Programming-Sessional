#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines : ");
    scanf("%d", &n);
    int sp = 1;
    int st = n - 1;
    for(int l=0;l<2*n-1;l++){
        printf("*");
    }
    printf("\n");
    for(int i=0; i<n-1; i++){
        for(int j = 0;j<st;j++){
            printf("*");
        }
        for(int k=0;k<sp;k++){
            printf(" ");
        }
        for(int j = 0;j<st;j++){
            printf("*");
        }
        printf("\n");
        sp+=2;
        st--;
}
return 0;
}