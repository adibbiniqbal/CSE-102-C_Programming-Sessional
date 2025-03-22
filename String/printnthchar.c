#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char str[100];
    gets(str);
    printf("Enter value of n : ");
    scanf("%d", &n);
    if(n<strlen(str)){
        printf("%dth element is %c", n, str[n]);
    }
    else{
        printf("Such element does not exist");
    }
    return 0;
}