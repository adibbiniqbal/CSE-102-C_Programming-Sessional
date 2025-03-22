#include<stdio.h>
int main(){
    int n,m=1,s;
    printf("Enter a number : ");
    scanf("%d", &n);
    s = 8*sizeof(n);
    m = m << (s-1);
    if(n&m){
        printf("Number is negative");
    }
    else{
        printf("Number is positive");
    }
    return 0;
}