#include<stdio.h>
int main()
{
    int n;
    float b=1;
    printf("Enter the value of n till u want to sum the series 1+1/4+1/9+1/16.....+1/n*n\n");
    scanf("%d",&n);
    for(float i=1;i<n;i++)
    {
        b=(b+(1/((i+1)*(i+1))));
    }
    printf("\n%f",b);
    return 0;
}
