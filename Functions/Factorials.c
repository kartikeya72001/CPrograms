#include<stdio.h>
int factorial (int a)
{
    if(a==1||a==0)
        return 1;
    else
    return (a*factorial(a-1));
}
int main()
{
    int a,fact;
    printf("Enter the integer whose factorial is to be found\n");
    scanf("%d",&a);

    fact = factorial(a);
    printf("Factorial = %d",fact);
    return 0;
}

