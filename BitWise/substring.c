// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ptrn[100], str[100];
//     scanf("%s %s", &ptrn, &str);
//     int count = 0;
//     char *p=strstr(str,ptrn);
//     int len=strlen(ptrn);
//     while(p){
//         p = strstr(p+1,ptrn);
//         count++;
//     }
//     printf("%d", count);      
// }
#include<stdio.h>
#include<string.h>
int main(){
    char ptrn[100], str[100];
    scanf("%s %s", &ptrn, &str);
    int count=0;
    for(int i=0;i<strlen(str);i++){
        int flag=1;
        for(int j=0;j<strlen(ptrn);j++){
            if(str[i+j] != ptrn[j]) flag = 0;
        }
        if(flag) count++;
    }
    printf("%d", count);      
}