#include<stdio.h>
int main(){
    int n,m=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n&m){
        printf("Number is odd");
    }
    else{
        printf("Number is even");
    }
    return 0;
}