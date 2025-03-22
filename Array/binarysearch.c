#include<stdio.h>
int main(){
    int n,target,indx=-1;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter a sorted array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter target : ");
    scanf("%d", &target);
    int first = 0;
    int last = (n-1);
    while(last>=first){
        int mid = (first+last)/2;
        if(arr[mid]==target){
            indx=mid;
            break;
        }
        if(arr[mid] < target){
            first = mid + 1;
        }
        if(arr[mid] > target){
            last = mid - 1;
        }
        }
        if(indx==-1){
            printf("Target not found");
        }
        else{
            printf("Target is found at index %d", indx);
        }
    return 0;
    }