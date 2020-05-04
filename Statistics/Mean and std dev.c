#include<stdio.h>
#include<math.h>
int main()
{
    int arr[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    int b=0;
    double mean,sum=0,c=0;
    for (int i=0;i<15;i++)
    {
        b = b+arr[i];
    }
    mean = (float)b/15;
    printf("%d %4.2lf",b,mean);
    for (int i=0;i<15;i++)
    {
        sum = sum + (arr[i]-mean);
    }
    c = (sqrt(sum)/15);
    printf("\n%lf",c);
    return 0;
}
