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
    int n,temp,j;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    inputArray(arr,n);
    for(int i=1;i<n;i++){
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            if(arr[j]<arr[j-1]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            j--;
        }
    }
    printArray(arr,n);
    return 0;
}