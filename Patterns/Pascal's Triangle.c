//Correction needed
#include<stdio.h>
int main()
{
    int arr[15][15]={0};
    int i,j,a;
    printf("Enter the size of the pascal's triangle\n");
    scanf("%d",&a);
    arr[0][0]=0;
    arr[0][1]=1;
    arr[1][0]=1;
    for(i=1;i<a;i++)
    {
        for(j=1;j<a;j++)
        {
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }
    for(i=1;i<a;i++)
    {
        for(j=1;j<a;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
