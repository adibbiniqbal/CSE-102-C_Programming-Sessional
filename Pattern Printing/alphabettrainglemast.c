#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char a = 65;
        for(int j=0;j<n-1-i;j++){
            printf(" ");
            }
        for(int k=0;k<=i;k++){
        printf("%c", a);
        a++;
        }
        printf("\n");
        }
        return 0;
    }