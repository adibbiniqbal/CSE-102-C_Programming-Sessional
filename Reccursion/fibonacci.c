#include<stdio.h>
int fibonacci(int n){
    if(n==1 || n==2) return 1; 
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("The %dth term of fibonacci series is %d", n, fibonacci(n));
}