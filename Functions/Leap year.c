#include<stdio.h>
int chk(int a)
{
    if(a%100==0)
    {
        if (a%400==0)
        {
            return 1;
        }
        else if (a%400!=0)
        {
            return 0;
        }
    }
    else if(a%100!=0)
    {
        if (a%4==0)
        {
            return 1;
        }
        else if (a%4!=0)
        {
            return 0;
        }
    }
}


int main()
{
    int yr,res,a=0;
    do{
    printf("Enter the year to be checked\n");
    scanf("%d",&yr);
    res=chk(yr);
    if(res==1)
    {
        printf("The entered year is a leap year\n");
    }
    else if (res==0)
    {
        printf("The entered year is a non-leap year\n");
    }
    printf("To check for another value enter 0 else enter 1\n");
    scanf("%d",&a);
    printf("\n");
    }while(a!=1);
    return 0;
}
