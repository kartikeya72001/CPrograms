#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int arr[n],n;
    int i,a,j;
    printf("Enter the number of book");
    scanf("%d",&n);
    printf("Enter the number of pages of each book");
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
           {
              a=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=a;
           }
        }
    }
    printf("Enter the number of students");
    scanf("%d",&a);
    if(a==n)
    {
        printf("Maximum number of minimum possible books allotted is: %d",arr[n]);
    }

}
