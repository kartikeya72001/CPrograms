#include<stdio.h>
int power(int a, int b)
{
    int c=1;
       for(int i=1;i<=a;i++)
        {
           c=c*b;
        }
       return c;
}
int main()
{
    int a,b,res;
    printf("Enter the Exponent and the base respectively\n");
    scanf("%d %d",&a,&b);
    res=power(a,b);
    printf("\n%d\n",res);
    return 0;
}
