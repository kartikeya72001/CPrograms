#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,ar;
    printf("Enter the sides of the triangle\n");
    scanf ("%d %d %d",&a,&b,&c);
    if (a==b && b==c)
    {
        ar = (1.73205*a*a)/4;
        printf("\nArea of the triangle is %4.2f\n",ar);
    }
    else
    {
        s = (a+b+c)/2;
        ar = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of the triangle is %4.2f",ar);
    }
    return 0;
}
