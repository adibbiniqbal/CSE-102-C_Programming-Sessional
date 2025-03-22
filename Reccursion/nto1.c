#include<stdio.h>
void increasing(int n){
    if(n==0)  return;
    printf("%d ", n);
    return increasing(n-1);
}
int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    increasing(n);
    return 0;
}