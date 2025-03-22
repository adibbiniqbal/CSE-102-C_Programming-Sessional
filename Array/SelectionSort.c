#include<stdio.h>
int main(){
    int n,temp,indx,min,i,j;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        min=arr[i];
        indx = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                indx = j;
            }
        }
        temp = arr[i];
        arr[i] = min;
        arr[indx]=temp;
        }
    printf("Array after sorting ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}