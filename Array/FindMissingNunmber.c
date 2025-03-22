#include<stdio.h>
int main(){
    int n,sum=0,sum2;
    printf("Enter digits : ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter array : ");
    for(int i=0;i<n-1;i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sum2 = (n*(n+1))/2;
    printf("Missing number is %d", sum2-sum);
    return 0;
}