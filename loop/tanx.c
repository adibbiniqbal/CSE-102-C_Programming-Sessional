#include<stdio.h>
int main(){
float x,n,s,t,r;
scanf("%f %f",  &x,&n);
x=22.0*x/(7*180);
s=t=x;
for(int i=1;i<n;i++){
r=i*x*x/(2*i+1);
t=t*r;
s+=t;
}
printf("%f", s);
    return 0;
}