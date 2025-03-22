#include<stdio.h>
void Binary(int n){
    int m = 1;
    int i,s;
    s = 8*sizeof(n);
    for(i=0;i<s;i++){
        printf("%d",(n>>(s-1-i)&m));
    }
}
int main(){
    int n,i,s,m=1,count1=0,count0=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    s = 8*sizeof(n);
    for(i=0;i<s-1;i++){
        ((n>>(s-1-i))&m)&((n>>(s-2-i))&m) ? count1++ : count0++;
    }
    printf("Binary number is : ");
    Binary(n);
    printf("\n");
    printf("1s count is %d and 0s count is %d", count1, count0);
    return 0;
}