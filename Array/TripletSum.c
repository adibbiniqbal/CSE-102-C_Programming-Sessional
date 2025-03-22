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
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                count++;
            }
            }
        }
    }
    printf("Number of pairs is %d", count);
    return 0;
}