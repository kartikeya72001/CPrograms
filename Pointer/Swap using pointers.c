#include<stdio.h>
int main()
{
    int a,b,*n1,*n2;
    printf("Enter first integer");
    scanf("%d",&a);
    printf("Enter second integer");
    scanf("%d",&b);
    *n1=a;
    *n2=b;
    printf("a=%d\nb=%d",a,b);
    return 0;
}
