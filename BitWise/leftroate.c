#include<stdio.h>
int leftrotate(int n, int r){
    return ((n<<r) | n>>((sizeof(int)*8)-r));
}
void binary(int n){
    for(int i=0;i<8*sizeof(int);i++){
        printf("%d", n>>((8*sizeof(int)-1-i))&1);
    }
}
int main(){
    int n,r;
    scanf("%d %d", &n, &r);
    binary(n);
    printf("\n");
    n = leftrotate(n,r);
    binary(n);
    return 0;
}