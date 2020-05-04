#include<stdio.h>
long fact(int);
int main()
{
    int a,b,n,i,j;
    printf("Enter the number of rows to be printed\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=(n-i-2);j++)
        {
            printf(" ");
        }
        for (j=0;j<=i;j++)
        {
            a=fact(i)/(fact(i-j)*fact(j));
            printf(" ");
            printf("%d",a);
        }
        printf("\n");
    }
    //printf("%d",fact(n));
    return 0;
}
long fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
