#include<stdio.h>
void printbin(int n){
    int s = 8*sizeof(int);
    for(int i = 0;i<s;i++){
        printf("%d", 1&(n>>(s-1-i)));
    }
    printf("\n");
}
int setbits(int x, int p, int n){
    int m = ~(~0<<n) << (p);
    return x | m;
}
int main(){
    int x,p,n;
    scanf("%d", &x);
    printbin(x);
    scanf("%d %d", &p, &n);
    x = setbits(x,p,n);
    printbin(x);
}