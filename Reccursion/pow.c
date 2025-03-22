#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int n,p;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter power : ");
    scanf("%d", &p);
    printf("%d raise to the power %d is %d", n, p, power(n,p));
    return 0;
}