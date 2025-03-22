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
    int n,temp,flag;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    inputArray(arr,n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr [j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printArray(arr,n);
    return 0;
}