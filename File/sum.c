#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("input.txt", "a+");
    if(fp==NULL){
        printf("file not found");
        exit(1);
    }
    int temp,sum=0;
    while(fscanf(fp,"%d",&temp) != EOF){
        sum += temp;
    }
    fprintf(fp,"\nsum of the numbers = %d",sum);
    fclose(fp);
}