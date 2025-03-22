#include<stdio.h>
int main(){
    int n, reverse = 0, q, rem;
    printf("Enter the number : ");
    scanf("%d", &n);
    q=n;
    while(q){
        rem = q%10;
        reverse = reverse * 10 + rem;
        q/=10;
    }
    if(n == reverse) printf("Number is Palindrome");
    else printf("Number is not palindrome");
    return 0;
}