#include<stdio.h>
int SetBit(int x, int p){
    int m = 1 << p;
    return(x|m);
}
int main(){
    int x,p,m=1;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("Enter position : ");
    scanf("%d", &p);
    x = SetBit(x,p);
    printf("After setting bit : %d", x);
    return 0;
}