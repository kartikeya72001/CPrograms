#include<stdio.h>
int main()
{
    int a,i,j,arr[2][2];
    printf("Enter the Values of the determinant\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    a=(arr[0][0]*arr[1][1])-(arr[1][0]*arr[0][1]);
    printf("%d",a);
    return 0;
}
