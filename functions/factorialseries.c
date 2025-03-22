#include<stdio.h>
int fact(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d! - %d\n",i, fact(i));
    }
    return 0;
}