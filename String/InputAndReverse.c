#include<stdio.h>
#include<string.h>
int main(){
    int i=0,size=0,j=0;
    char str[40];
    char temp;
    printf("Enter a string : ");
    gets(str);
    printf("Reversed string is : ");
    while(str[i]!='\0'){
        i++;
        size++;
    }
    i=0;
    for(i=0,j=size-1;i<=j;i++,j--){
        temp = str[i];
        str[i] = str[j];
        str [j] = temp;
    }
    puts(str);
    return 0;
}