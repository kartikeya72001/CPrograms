#include<stdio.h>
int dig(int a);
int count=0;
int main()
{
    int a,num;
    printf("Enter the Number whose digits is to be counted\n");
    scanf("%d",&a);
    num = dig(a);
    return 0;
}
int dig(int a)
{
    if(a==0)
    {
        printf("Number of digits are %d",count);
        return 1;
    }
    else if(a!=0)
    {
        a=a/10;
        if(a>=0)
        {
            count++;

        }
        return(dig(a));
    }
}
