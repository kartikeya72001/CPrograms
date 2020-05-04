#include<stdio.h>
int main()
{
    int a,i,j=1;
    int t=1;
    printf("Enter the range of the triangle\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(int c=0;c<(a-i);c++)
            printf(" ");

        for(j=0;j<i;j++)
        {
            printf("%d ",t);
            t++;
        }

        printf("\n");
    }
    return 0;
}
