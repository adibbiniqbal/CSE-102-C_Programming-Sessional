#include <stdio.h>

int main()
{
    int nums[3][3];
    int temp[3][3];
    float adjoint[3][3];
    int cof[4];
    int count=0;
    int i,j,m,n;
    int cofact;
    float det;
    
    for( i=0;i<3;i++){
        for( j=0;j<3;j++){
            scanf("%d",&nums[i][j]);
        }
        
    }
    
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(m=0;m<3;m++){
                for(n=0;n<3;n++){
                    if(!(m==i||n==j)){
                        cof[count]=nums[m][n];
                        count++;
                    }
                }
                
            }
            cofact=(cof[0]*cof[3])-(cof[1]*cof[2]);
            if((i+j)%2==0){
            temp[i][j]=cofact;
            }
            else temp[i][j]= -cofact;
            count=0;
        }
    }
    
    for( i=0;i<3;i++){
        for( j=0;j<3;j++){
            adjoint[i][j]=temp[j][i];
        }
        
    }
    
    det=nums[0][0]*temp[0][0]+nums[0][1]*temp[0][1]+nums[0][2]*temp[0][2];
    
    if(det){
    for( i=0;i<3;i++){
        for( j=0;j<3;j++){
            printf("%5.2f ",adjoint[i][j]/det);
        }
        printf("\n");
    }
    
    }
    
    else printf("singular matrix");

    return 0;
}