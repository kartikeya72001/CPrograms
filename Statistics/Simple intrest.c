#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("Enter the Principle, rate and time period\n");
    scanf("%d %d %d",&p,&r,&t);
    si = p*r*t/100;
    printf("Simple intrest is: %d\n",si);
    printf("Amount is: %d",(p+si));
    return 0;
}
