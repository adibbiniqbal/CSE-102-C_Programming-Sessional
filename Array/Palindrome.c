#include<stdio.h>
int main(){
    int n,temp,flag=1;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        if(!(arr[i]==arr[j])){
            flag=0;
        }
    }
    if(flag==1){
        printf("Array is palindrome");
    }
    else{
        printf("Array is not palindrome");
    }
    return 0;
}