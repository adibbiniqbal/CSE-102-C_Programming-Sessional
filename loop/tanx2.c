#include<stdio.h>
int main(){
    float x,n,ss,s,sc,c,rs,rc;
    scanf("%f %f", &x, &n);
    x=x*22/(7*180);
        ss=s=x;
        sc=c=1;
    for(int i=1;i<n;i++){
        rs=-x*x/(2*i*(2*i+1));
        s=s*rs;
        ss+=s;
    }
    for(int j=1;j<n;j++){
        rc=-x*x/(2*j*(2*j-1));
        c=c*rc;
        sc+=c;
    }
    printf("%f", ss/sc);
    return 0;



}