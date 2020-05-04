#include<string.h>
#include<stdio.h>
int main()
{
    int a,n;
    int count1=0,count2=0,count3=0,count4=0,count5=0;
    int arr[200];
    printf("Enter the number of Elements\n");
    scanf("%d",&n);
    printf("Enter the set of numbers\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if(arr[i]>0)
            count1++;
    }
    printf("The Number of positive integers are = %d\n",count1);
    for (int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count2++;
    }
    printf("The Number of Zeros are = %d\n",count2);
    for (int i=0;i<n;i++)
    {
        if(arr[i]<0)
            count3++;
    }
    printf("The Number of negative integer are = %d\n",count3);
    for (int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            if(arr[i]%2==0)
                count4++;
        }
    }
    printf("The Number of even numbers are = %d\n",count4);
    for (int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            if(arr[i]%2!=0)
                count5++;
        }
    }
    printf("The Number of odd numbers are = %d\n",count5);
    return 0;
}
