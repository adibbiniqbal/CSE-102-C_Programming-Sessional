#include<stdio.h>
int main(){
    int n,r=0,rem,q,order=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    q=n;
    while(q){
        order++;
        q/=10;
    }
    q=n;
    while(q){
        int mul=1;
        rem=q%10;
        q/=10;
        for(int i=0;i<order;i++){
            mul=mul*rem;
        }
        r= r + mul;
    }
    if(n==r) printf("Number is armstrong");
    else printf("Number is not armstrong");
    return 0;
}