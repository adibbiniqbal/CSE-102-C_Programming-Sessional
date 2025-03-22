#include<stdio.h>
void inputArray(int a[], int size){
    for(int i=0;i<size;i++){
        scanf("%d", &a[i]);
    }
}
void printArray(int a[], int size){
    for(int i=0;i<size;i++){
        printf("%d ", a[i]);
    }    
}
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    inputArray(arr,n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[i]^arr[j];
                arr[j] = arr[i]^arr[j];
                arr[i] = arr[i]^arr[j];
            }
        }
    }
    printArray(arr,n);
    return 0;
}