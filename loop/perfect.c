#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1;i<n;i++){
        if(n%i==0) sum+=i;
    }
    if(n==sum) printf("Number is perfect");
    else printf("Number is not pefect");
    return 0;
}