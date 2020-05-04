#include<stdio.h>
#include<stdlib.h>
int calsum(int p);
int main()
{
    int a,b;
    printf("Enter the number whose sum is to be found\n");
    scanf("%d",&a);

    b = calsum(a);
    printf("Sum of the digits of %d is %d",a,b);
    return 0;
}
int calsum(int p)
{
    if (p==0)
        return 0;
    return (p%10 + calsum(p/10));
}
