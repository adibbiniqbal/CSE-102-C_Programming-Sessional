#include<stdio.h>
#include<limits.h>
int main(){
    int n,max,indx=0;
    max=INT_MIN;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
            indx = i;
        }
    }
    printf("Maximum number in array is %d and its index is %d", max, indx);
    return 0;
}