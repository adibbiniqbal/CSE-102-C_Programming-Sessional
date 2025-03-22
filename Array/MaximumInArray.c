#include<stdio.h>
#include<limits.h>
int main(){
    int n,max;
    max=INT_MIN;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        max = max > arr[i] ? max : arr[i];
    }
    printf("Maximum number in array is %d", max);
    return 0;
}