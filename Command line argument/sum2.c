#include<stdio.h>
int main(int c, char *v[]){
    int a,b;
    sscanf(v[1],"%d", &a);
    sscanf(v[2],"%d", &b);
    printf("%d", a+b);
}