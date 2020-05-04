#include<stdio.h>
int main()
{
    int pas[6][6];
    pas[1][2]=0;
    pas[1][3]=0;
    pas[1][3]=0;
    pas[1][4]=0;
    pas[1][5]=0;

    for (int i=0;i<6;i++)
    {
        pas[i][0]=1;
    }
    for (int i=0;i<6;i++)
    {
        pas[i][1]=0+i;
    }
    for (int i=0;i<6;i++)
    {
        pas[i+1][2]=0+2*i;
    }
    for (int i=0;i<6;i++)
    {
        pas [i+2][3]=0+3*i;
    }
    for (int i=0;i<6;i++)
    {
        pas[i+3][4]=0+4*i;
    }
     for (int i=0;i<6;i++)
    {
        pas[i+4][5]=0+5*i;
    }
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
        {
            printf(" %d ",pas[i][j]);
        }
        printf("\n");
        }
}
