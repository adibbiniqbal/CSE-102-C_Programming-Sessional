#include<stdio.h>
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a, int b){
    return a*b/gcd(a,b);
}
int gcdarr(int * arr,int n){
    if(n==1) return arr[0];
    return gcd(gcdarr(arr,n-1),arr[n-1]);
}
int lcmarr(int * arr, int n){
    if(n==1) return arr[0];
    return lcm(lcmarr(arr,n-1),arr[n-1]);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("GCD=%d\n", gcdarr(arr,n));
    printf("LCM=%d", lcmarr(arr,n));
}
