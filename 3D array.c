
/*
name : Nancy moraa Kebaso 
reg no: CT101/G/23249/24
*/
#include<stdio.h>
int main ()
{
int i,j,k;
    int marks[2][3][2]={
    {{33,52},
    {45,98},
    {64,76}},
    
    {{10,12},
    {35,40},
    {80,42}}
    };
       for(i=0;i<2;i++){
       for(j=0;j<3;j++){
       for(k=0;k<2;k++){
    printf("marks[%d][%d][%d]=%d \n",i,j,k,marks[i][j][k]);
    }
    }
    }
    
return 0;
}
    
