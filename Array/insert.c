#include<stdio.h>
#include<stdlib.h>
int* insert(int *arr, int n, int idx, int size){
    int *new = (int *)malloc(sizeof(int)*(size+1));
    for(int i=0;i<size;i++) new[i] = arr[i];
    new[idx] = n;
    for(int i=idx+1;i<size+1;i++) new[i] = arr[i-1];
    free(arr);
    return new;
}
int main(){
    int *arr = (int *)malloc(sizeof(int)*5);
    arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4; arr[4] = 5;
    arr = insert(arr,9,0,5);
    for(int i=0;i<6;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}