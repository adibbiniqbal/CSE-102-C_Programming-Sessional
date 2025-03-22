#include<stdio.h>
int main(){
    int h,m,s,ms;
    for(h=0;h<24;h++){
        for(m=0;m<60;m++){
            for(s=0;s<60;s++){
                for(ms=0;ms<100;ms++){
                    printf("%02d:%02d:%02d:%02d", h,m,s,ms);
                    Sleep(1);
                    printf("\b\b\b\b\b\b\b\b\b\b\b");
                }
            }
        }
    }
    return 0;
}