/*#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int a,b,ans;
    printf("Enter the integers here\n");
    scanf("%d %d",&a,&b);
    ans=gcd(a,b);
    printf("GCD of the numbers is %d",ans);
    return 0;
}
int gcd(int a,int b)
{
    if (b != 0)
       return gcd(b, a%b);
    else
       return a;
}*/
#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b,c;
    printf("Enter two Numbers");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    gcd(a,b);
    return 0;
}
int gcd(int a,int b)
{
    if(a==1)
        printf("GCD of the numbers is 1");
    else if(b%a==0)
        printf("GCD is %d",a);
    else
        return(gcd((a-1),b));
}
