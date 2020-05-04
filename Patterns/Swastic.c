#include<stdio.h>
int main()
{
    int i,j,a,n;
    char arr[25][25];
    //printf("Enter the size of the swastik");
    //scanf("%d",&a);
    //a=(2*a)+1;
    for(i=0;i<25;i++)
    {
        for(j=0;j<25;j++)
            arr[i][j]='*';
    }
    for(i=0;i<25;i++)
    {
        for(j=0;j<25;j++)
            printf("%c",arr[i][j]);
        printf("\n");
    }
    return 0;
}
