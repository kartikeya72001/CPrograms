#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,a,count=0;
    printf("Enter the number to be converted to binary\n");
    scanf("%d",&n);
    int arr1[15]={0};
    int arr2[15]={0};
    a=n;
    while(a>=0)
    {
        for (int i=0;pow(2,i)<a;i++)
        {
            count++;
        }
        arr1[count]=1;
        a = n-pow(2,count-1);
        count=0;
    }
    for (int i=0;i<15;i++)
    {
        arr1[i]=arr2[14-i];
    }
    printf("The required Binary is : ");
    for (int i=0;i<15;i++)
    {
        printf("%d",arr2[i]);
    }
    return 0;

}
