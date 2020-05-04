#include<stdio.h>
int addint(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b,c;
    printf("Enter the two integers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    c=addint(a,b);
    printf("Sum = %d",c);
    return 0;
}

