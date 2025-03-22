#include<stdio.h>
int ResetBit(int x, int p){
    int m = ~(1<<p);
    return(x&m);
}
int main(){
    int x,p;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("Enter position : ");
    scanf("%d", &p);
    x = ResetBit(x,p);
    printf("After resetting bit : %d",x);    
    return 0;
}