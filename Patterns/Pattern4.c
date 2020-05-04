#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;++j)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
        for(j=1;j<i;++j)
        {
            k--;
        }
    }
    return 0;
}
