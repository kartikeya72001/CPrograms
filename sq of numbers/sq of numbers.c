#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of n\n");
    scanf("%d",&a);
    for(int i=0;i<=2*a;i++)
    {
        if (i%2==0)
        {
            b=i*i;
            printf("Square of %d is %d\n",i,b);
        }
    }
    return 0;
}
