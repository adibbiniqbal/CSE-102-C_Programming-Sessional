#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("enter value of n : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of the series is : %d", sum);
    return 0;
}