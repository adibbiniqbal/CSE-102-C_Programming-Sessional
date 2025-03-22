#include<stdio.h>
int main(){
    int n,q,sum=0,rem,fac;
    printf("Enter a number : ");
    scanf("%d", &n);
    q=n;
    while(q){
        fac = 1;
        rem = q%10;
        q/=10;
        for(int i=1;i<=rem;i++){
            fac*=i;
        }
        sum += fac;
    }
    if(n==sum) printf("Number is a strong number");
    else printf("Number is not a strong number");
    return 0;
}