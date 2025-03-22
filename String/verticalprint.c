#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(){
    char str[100];
    gets(str);
    printf("\n");
    for(int i=0;i<strlen(str);i++){
        printf("%c\n", *(str+i));
        Sleep(500);
    }
    return 0;
}