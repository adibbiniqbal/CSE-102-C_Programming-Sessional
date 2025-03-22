#include<stdio.h>
int main(){
    int n,sum=0,count=0;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter sum : ");
    scanf("%d", &sum);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d,%d)\n",arr[i],arr[j]);
                count++;
            }
        }
    }
    printf("Number of pairs is %d", count);
    return 0;
}