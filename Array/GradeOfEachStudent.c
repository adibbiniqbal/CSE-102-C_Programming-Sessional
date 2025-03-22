#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number of students : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);                  
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=80) printf("Student at index %d has grade A\n", i);
        else if(arr[i]>=70) printf("Student at index %d has grade B\n", i);
        else if(arr[i]>=60) printf("Student at index %d has grade C\n", i);
        else if(arr[i]>=50) printf("Student at index %d has grade D\n", i);
        else printf("Student at index %d has grade F\n", i); 
    }
    return 0;
}