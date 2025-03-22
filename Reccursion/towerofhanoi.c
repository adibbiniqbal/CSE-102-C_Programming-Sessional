#include<stdio.h>
void moves(int n, char s, char h, char d){
    if(n==1){
        printf("%c -> %c\n", s, d);
        return;
    } 
    moves(n-1,s,d,h);
    moves(1,s,h,d);
    moves(n-1,h,s,d);
}
int movesno(int n, char s, char h, char d){
    if(n==1) return 1;
    return 1+movesno(n-1,s,d,h)+movesno(n-1,h,s,d);
}
int main(){
    int n=3;
    char s='1', h='2', d='3';
    moves(n,s,h,d);
    printf("Minimum Moves = %d", movesno(n,s,h,d));
}