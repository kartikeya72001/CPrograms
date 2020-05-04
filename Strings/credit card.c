#include<stdio.h>
int main()
{
    int cdno[16];
    int arr1[8];
    int sum1=0,sum2=0;
    int i,j;
    printf("Enter the credit Card Number\n");
    for(i=0;i<16;i++)
    {
        scanf("%d",&cdno[i]);
    }
    for (i=0,j=0;i<16,j<8;i+=2,j++)
    {
        arr1[j]=2*cdno[i];
    }
    for (i=0;i<8;i++)
    {
        if (arr1[i]>=10)
        {
            arr1[i]=arr1[i]-9;
        }
        sum1 = sum1+arr1[i];
    }
    for (i=1;i<16;i+=2)
    {
        sum2 = sum2+cdno[i];
    }
    if ((sum1+sum2)%10==0)
    {
        printf("Credit card number is valid");
    }
    else
        printf("Fake Credit Card Number");
    return 0;
}
