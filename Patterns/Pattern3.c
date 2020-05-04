#include<stdio.h>
int main()
{
    int a=1,n,i,j;
    printf("Enter the value of n\n");
    printf("\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;++j)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
