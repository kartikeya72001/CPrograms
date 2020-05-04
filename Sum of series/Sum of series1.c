#include<stdio.h>
int main()
{
    int n;
    float b=1;
    printf("Enter the value of n till u want to sum the series 1+1/2+1/3+1/4.....+1/n\n");
    scanf("%d",&n);
    for(float i=1;i<n;i++)
    {
        b=(b+(1/(i+1)));
    }
    printf("\n%4.3f",b);
    return 0;
}
