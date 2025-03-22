#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines : ");
    scanf("%d", &n);
    int sp = 0;
    int st = n;
    for(int i=0;i<n;i++){
        for(int j=0;j<sp;j++){
            printf(" ");
        }
        for(int k=0;k<st;k++){
            printf("*");
        }
        st--;
        sp++;
        printf("\n");
    }
    return 0;
}