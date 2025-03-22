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
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int s=0;s<n-i;s++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int ncr=combination(i,j);
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}