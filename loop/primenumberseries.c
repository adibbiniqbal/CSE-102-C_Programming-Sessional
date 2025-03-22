#include<stdio.h>
int main(){
    int n;
    int c=0;
    printf("enter value of n : ");
    scanf("%d", &n);
    for(int i=2;i<=n;i++){
        int p=1;
        for(int j=2;j<i;j++){
            if(i%j==0) p=0;
        }
        if(p==1){
            printf("%d\t", i);
            c++;
            }
    }
    printf("\nthere are %d prime numbers", c);
    return 0;
}