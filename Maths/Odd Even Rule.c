#include<stdio.h>
int main()
{
    int n1;
    int sum1=0,sum2=0,nt;
    scanf("%d",&nt);
    while(nt>0)
    {
        sum1=0;
        sum2=0;
        scanf("%d",&n1);
        while(n1>=1)
        {
            if((n1%10)%2==0)
            {
                sum1=sum1+(n1%10);
                n1=n1/10;
            }
            else if((n1%10)%2!=0)
            {
                sum2=sum2+(n1%10);
                n1=n1/10;
            }
        }
        if((sum1%4==0) || (sum2%3==0))
            printf("Yes\n");
        else if((sum1%4!=0) && (sum2%3!=0))
            printf("No\n");
        nt--;
    }
    return 0;

}
