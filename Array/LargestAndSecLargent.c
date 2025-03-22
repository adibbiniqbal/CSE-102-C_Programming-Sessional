#include<stdio.h>
#include<limits.h>
int main(){
    int n,Largest,secL;
    Largest=INT_MIN;
    secL=INT_MIN;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>Largest){
            secL=Largest;
            Largest=arr[i];
        }
        else if(arr[i]>secL){
            secL=arr[i];
        }
    }
    printf("Largest number is %d and second largest number is %d", Largest, secL);
    return 0;
}