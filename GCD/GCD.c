#include<stdio.h>
int main()
{
    int gcd=1,a,b,i;
    printf("Enter the two numbers\n");
    scanf("%d %d",&a,&b);
    if(b>a)
    {
        for(i=2;i<=a;i++)
        {
            if (a%i==0&&b%i==0)
            {
                gcd=i;
            }
        }
    }
    else
    {
        for(i=2;i<=b;i++)
        {
            if (a%i==0&&b%i==0)
            {
                gcd=i;
            }
        }
    }
    printf("Gcd of the numbers is %d",gcd);
    return 0;
}
