#include<stdio.h>
int main()
{
    int arr[3][3];
    printf("Enter the elements of Matrix\n");
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d",arr[i]);
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if(arr[i][j]=arr[j][i])
            {
                printf("Matrix is symmetric ");
            }
            else
            {
                printf("Matrix is not symmetric");
            }
        }
    }
    return 0;
}
