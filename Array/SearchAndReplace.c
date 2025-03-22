#include<stdio.h>
int main(){
    int n,target,count=0,m;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter target : ");
    scanf("%d", &target);
    printf("Enter new value : ");
    scanf("%d", &m);
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            arr[i]=m;
            count++;
            printf("Found target at index %d and replaced by %d \n", i, m);
        }
    }
    printf("Array after replacing target ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}