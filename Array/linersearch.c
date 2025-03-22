#include<stdio.h>
int main(){
    int n,target,flag=0,indx=0;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter target : ");
    scanf("%d", &target);
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            flag=1;
            indx=i;
            break;
        }
    }
    if(flag==1) printf("Target is present at index %d", indx);
    else printf("Target is absent");
    return 0;
}