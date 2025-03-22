#include<stdio.h>
int main(){
    int n,m=1;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]&m) printf("%d ", arr[i]);
    }
    return 0;
}