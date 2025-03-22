#include<stdio.h>
int main(){
    int binary, remainder, mul=1,decimal=0;
    printf("Enter a binary number : ");
    scanf("%d", &binary);
    while(binary){
        remainder = mul*(binary%10);
        binary/=10;
        decimal+=remainder;
        mul*=2;
    }
    printf("The decimal is : %d", decimal);
    return 0;
}