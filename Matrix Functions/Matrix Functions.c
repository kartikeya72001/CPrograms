#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the Matrices\n");
    printf("a b c\n");
    printf("d e f\n");
    printf("g h i\n");
    printf("\n");
    int mat1[3][3];
    int mat2[3][3];
    int add[3][3];
    int sub[3][3];
    int trans1[3][3],trans2[3][3];
    int choice=0;
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
    do
    {
        printf("\nSelect Choices\n.1 Add two matrices\n.2 Subtract the two matrices\n.3 Transpose of the two matrices\n Press any other key to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: for(int i=0;i<3;i++)
                     {
                         for(int j=0;j<3;j++)
                         {
                             add[i][j]=mat1[i][j]+mat2[i][j];
                             printf(" %d ",add[i][j]);
                         }
                         printf("\n");
                     }
                     break;
            case 2: for(int i=0;i<3;i++)
                     {
                         for(int j=0;j<3;j++)
                         {
                             sub[i][j]=mat1[i][j]-mat2[i][j];
                             printf(" %d ",sub[i][j]);
                         }
                         printf("\n");
                     }
                     break;
            case 3: for(int i=0;i<3;i++)
                     {
                         for(int j=0;j<3;j++)
                         {
                             trans1[i][j]=mat1[j][i];
                             printf(" %d ",trans1[i][j]);
                         }
                         printf("\n");
                     }
                     printf("\n");
                     for(int i=0;i<3;i++)
                     {
                         for(int j=0;j<3;j++)
                         {
                             trans2[i][j]=mat2[j][i];
                             printf(" %d ",trans2[i][j]);
                         }
                         printf("\n");
                     }
                     break;
            default : printf("\n.....Exiting application");
                      exit(0);
        }
    }while(choice!=0);
    return 0;
}
