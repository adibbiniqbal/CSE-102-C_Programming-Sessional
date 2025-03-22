#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines : ");
    scanf("%d", &n);
    int st = 1;
    int sp = n/2;
    int m=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<sp;j++){
            printf(" ");
        }
        for(int k=0;k<st;k++){
            printf("*");
        }
        if(i<m){
            sp--;
            st+=2;
        }
        else{
            sp++;
            st-=2;
        }
        printf("\n");
    }
    return 0;
}