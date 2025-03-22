#include<stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i] = arr[n-i-1];
    }
    printf("Reversed array is ");
    for(int i=0;i<n;i++){
        printf("%d ", brr[i]);
    }
    return 0;
}