#include<stdio.h>
int main(){
    int n, factor=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(n%i==0) factor++;
    }
    if(factor==2) printf("Number is prime");
    else printf("Number is composite");
    return 0;
}