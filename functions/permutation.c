#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int permutation(int n, int r){
    int npr=factorial(n)/factorial(n-r);
    return npr;
}
int main(){
    int n, r;
    printf("Enter the value of n and r : ");
    scanf("%d%d", &n, &r);
    int npr=permutation(n,r);
    printf("The value of npr is %d", npr);
    return 0;
}