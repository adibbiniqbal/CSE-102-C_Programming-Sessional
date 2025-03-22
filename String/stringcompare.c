#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    int n, i=0;
    gets(str1);
    gets(str2);
    if(strlen(str1)!=strlen(str2)){
        n=0;
    }

    else{while(*(str1+i) || *(str2+i)){
        if(*(str1+i)==*(str2+i)){
            n=1;
        }
        else{
            n=0;
        }
        i++;
    } }
    printf("%d", n);
    return 0;
}