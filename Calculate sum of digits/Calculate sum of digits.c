#include<stdio.h>
int main()
{
    int n,a,b,sum=0;
    printf("Enter the integer whose Sum of digits has to be calculated\n");
    scanf("%d",&n);

    a=n;
    while(a>=1)
    {
        b=a%10;
        sum = sum+b;
        a=a/10;
    }
    printf("Sum of digits of %d is %d",n,sum);
    return 0;
}
