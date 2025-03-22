#include<stdio.h>
int main(){
    int n, s=0;
    int t;
    printf("enter value of n : ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        if(i%2!=0) t=i*i;
        else t=-i*i;
        s+=t;
    }
    printf("sum of the series is : %d", s);
    return 0;
}