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
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    Binary(n);
    return 0;
}