#include<stdio.h>
int InvertBit(int x, int p){
    int m = 1 << p;
    return(x^m);
}
int main(){
    int x,p;
    printf("Enter number : ");
    scanf("%d", &x);
    printf("Enter position : ");
    scanf("%d", &p);
    x = InvertBit(x,p);
    printf("After inverting bit : %d", x);
    return 0;
}