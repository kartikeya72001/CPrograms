#include<stdio.h>
int main()
{
    int n=0;
    int num[n];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the Numbers\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&num[i]);
    }
    printf("Deleting all the duplicates\n");

    for(int k=0;k<n;k++)
    {
       for(int i=k+1;i<n;i++)
       {
          if(num[k]==num[i])
          {
              for(int j=k;j<n;j++)
              {
                  num[j]=num[j+1];
              }
              n--;
          }
       }
    }
    printf("Array after deletion is as followed:");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",num[i]);
    }
    return 0;
}
