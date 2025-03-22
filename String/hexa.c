#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int rem,len=0;
    char rema[32];
    while(n){
        rem= n%16;
        rema[len++]= rem>9 ? rem - 10 + 'A' : rem + '0';
        n /= 16;
    }
    char hex[len+1+2];
    hex[0] = '0'; hex[1] = 'x';
    for(int i=0;i<len;i++){
        hex[2+i] = rema[len-1-i];
    }
    hex[len+2] = 0;
    printf("%s", hex);
    return 0;
}