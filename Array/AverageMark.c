#include<stdio.h>
int main(){
    int n,sum=0;
    float average;
    printf("Enter number of students : ");
    scanf("%d", &n);
    printf("Enter numbers : ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (sum*1.0)/n;
    printf("Average number is : %g", average);
    return 0;
}