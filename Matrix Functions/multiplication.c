#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the Matrices\n");
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    printf("Enter Matrix 1\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter Matrix 2\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           mat3[i][j]=mat1[i][j]*mat2[i][j];
        }
    }
    printf("The new matrix obtained is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;

}
