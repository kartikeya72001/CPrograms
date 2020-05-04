#include<stdio.h>
int main()
{
    int basic,hra,da,allow,pf,total;
    char a;
    printf("Enter the Input\n");
    scanf("%d %c",&basic,&a);
    hra = 0.2*basic;
    da = 0.5*basic;
    if(a=='A' || a=='a')
        allow=1700;
    else if(a=='B' || a=='b')
        allow=1500;
    else
        allow=1300;
    pf=0.11*basic;
    total=basic+hra+da+allow-pf;
    printf("Total amount is %d",total);
    return 0;
}
