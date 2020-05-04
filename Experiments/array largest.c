#include<stdio.h>
int main()
{
    int arr[1000],i,n,arr2[1000],arr3[1000],j,k,sum,sum2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=0,k=0;i<n,j<n,k<n;i++)
    {
       if(arr[i]%2==0)
       {
           arr2[j]=arr[i];
           j++;
       }
       else if(arr[i]%2!=0)
       {
           arr3[k]=arr[i];
           k++;
       }
    }
    for(i=0;i<n;i++)
        {
            for (i=0;i<j;i++)
        {
            sum=arr2[i]+sum;
        }
        for (i=0;i<k;i++)
        {
            sum2=arr3[i]+sum2;
        }
        if(sum%4==0||sum2%3==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
	return 0;
}
