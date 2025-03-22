#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines : ");
    scanf("%d", &n);
    int a = 1;
    int sp=1;
    for(int i=0;i<2*n-1;i++){
        printf("%d", a);
        a = i<n-1 ? a + 1 : a - 1;
    }
    printf("\n");
    for(int j=0;j<n-1;j++){
    int b=0;
    for(int k=0;k<n-1-j;k++){
    ++b;
    printf("%d", b);
    }
    for(int s=0;s<sp;s++){
        printf(" ");
    }
    for(int k=0;k<n-1-j;k++){
    printf("%d", b);
    b--;
    }
    printf("\n");
    sp+=2;
}
return 0;
}