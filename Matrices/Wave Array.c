#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,arr[10][10];
    int i=0,j=0;

    scanf("%d",&n1);
    scanf("%d",&n2);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",arr[n1][n2]);
        }
    }
    i=0;
    j=0;
    if(n1%2==0)
    {
        while(i<n1/2)
        {
            for(j=0;j<n2;j++)
            {
                printf("%d",arr[i][j]);
            }
            for(j=n2;j>0;j--)
            {
                printf("%d",arr[i][j]);
            }
            i++;
        }
    }
    else
    {
        while(i<n1+1/2)
        {
            for(j=0;j<n2;j++)
            {
                printf("%d",arr[i][j]);
            }
            for(j=n2;j>0;j--)
            {
                printf("%d",arr[i][j]);
            }
            i++;
        }
    }
    printf("END");
    return 0;
}
