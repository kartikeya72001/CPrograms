#include<stdio.h>
#include<math.h>
int main()
{
    float a=0,b=0,c;
    int d,e;
    printf("Enter the smallest pythagorean Triplet\n");
    scanf("%f",&a);

    if(a>=3)
    {
        b = 2*sqrt(a+1);
        c = ((b/2)*(b/2))+1;
        d = 10*b;
        e =10*c;
        if( d%10==0 && e%10==0)
        {
            printf("The Pythagorean triplets are %4.2f %4.2f %4.2f",a,b,c);
        }
        else
        {
            printf("Error non integer sides obtained");
        }
    }
    else if(a<3&&a>0)
    {
        b = ((a/2)*(a/2))-1;
        c = b+2;
        d = 10*b;
        e =10*c;
        if( d%10==0 && e%10==0 && a!=2)
        {
            printf("The Pythagorean triplets are %4.2f %4.2f %4.2f",a,b,c);
        }
        else
        {
            printf("Error non integer sides obtained or 0");
        }
    }
    else
    {
        printf("Enter positive integers only");
    }
    return 0;
}
