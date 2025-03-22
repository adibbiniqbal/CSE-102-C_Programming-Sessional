#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int a = 1;
        int b = i;
        for(int s=0;s<n-1-i;s++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d", a);
            a++;
        }
        for(int k=0;k<i;k++){
            printf("%d", b);
            b--;
        }
        printf("\n");
    }
    return 0;
}