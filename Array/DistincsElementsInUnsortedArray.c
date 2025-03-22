#include<stdio.h>
int main(){
    int n,count;
    printf("Enter length of array : ");
    scanf("%d", &n);
    count = n;
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count--;
                break;
            }
        }
    }
    printf("Number of distinct elements is %d", count);
    return 0;
}