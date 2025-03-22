#include<stdio.h>
void reverse(int a[], int s, int e){
    int temp;
    for(int i=s,j=e;i<j;i++,j--){
        temp = a[i];
        a [i] = a[j];
        a [j] = temp;
    }
}
int main(){
    int n,k;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rotation : ");
    scanf("%d", &k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("Rotated array is ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}