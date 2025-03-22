#include<stdio.h>
int main(){
    int n;
    printf("enter value of n : ");
    scanf("%d", &n);
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i;
            if(i>n) a = 2*n - i;
            int b = j;
            if(j>n) b = 2*n - j;
            int m = a < b ? a : b;
            printf("%d",n+1-m);
        }
        printf("\n");
    }
    return 0;
}