#include<stdio.h>
void printbinary(int n){
    int s = 8*sizeof(int);
    for(int i=0;i<s;i++){
        printf("%d", (n>>(s-1-i))&1);
    }
}
void consecutive(int n){
    int count1=0, count0=0;
    int nbi=~n;
    while(n){
        n = n & (n<<1);
        count1++;
    }
    printf("consecutive 1's = %d\n", count1);
    while(nbi){
        nbi = nbi & (nbi<<1);
        count0++;
    }
    printf("consecutive 0's = %d\n", count0);
    
}
int main(){
    int n,c;
    scanf("%d", &n);
    printbinary(n);
    printf("\n");
    consecutive(n);
}