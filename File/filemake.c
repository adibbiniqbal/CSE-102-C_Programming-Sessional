#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("copy file input.txt", "w");
    if(fp==NULL){
        exit(1);
    }
    fprintf(fp,"Hi this is Adib");
    fclose(fp);
}