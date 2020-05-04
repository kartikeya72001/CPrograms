#include<stdio.h>
int main()
{
    int i,n=0,a=0,j;
    printf("Enter the size of the array\n");
    scanf("%d",&n);

    int arr[100];
    printf("Enter the Values of the array to be sorted\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorting array...");
    printf("Sorted array is followed\n");

    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if(arr[i]>arr[i+1])
           {
              a=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=a;
           }
        }
    }


    for(int k=0;k<n;k++)
        printf("%d ",arr[k]);

    return 0;
}
