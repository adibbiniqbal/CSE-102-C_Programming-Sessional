#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n,r;
    printf("Enter the value of n and r: ");
    scanf("%d%d",&n,&r);
    int ncr=combination(n,r);
    printf("The value of ncr is %d",ncr);
    return 0;
}