#include<stdio.h>
int main()
{
    int a[20];
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
         scanf("%d",&a[i]);
    }


    for(int j=n-1;j>=0;j--)
    {
         printf("%d",a[j]);
    }

}
