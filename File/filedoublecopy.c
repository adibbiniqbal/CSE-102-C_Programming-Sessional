#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("copy file input.txt","r");
    if(fp==NULL){
        printf("File not found");
        exit(1);
    }
    FILE *fq=fopen("file double copy.txt","w");
    if(fq==NULL){
        fclose(fp);
        printf("Can not write file");
        exit(1);
    }
    char c;
    while(fscanf(fp,"%c",&c) != EOF){
        fprintf(fq,"%c",c);
    }
    fprintf(fq, "\n");
    rewind(fp);
    while(fscanf(fp,"%c",&c) != EOF){
        fprintf(fq,"%c",c);
    }
    fclose(fp);
    fclose(fq);
}