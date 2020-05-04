#include<stdio.h>
#include<math.h>
int tri(int a,int b, int c)
{
    double s,ar;
    s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is %4.2lf\n",ar);
}
int sq(int a)
{
    double ar;
    ar = a*a;
    printf("Area of the square is %4.2lf\n",ar);
}
int rec(int a, int b)
{
    double ar;
    ar = a*b;
    printf("Area of rectangle is %4.2lf\n",ar);
}
int cir (int a)
{
    double ar;
    ar= 3.141*a*a;
    printf("Area of circle is %4.2lf\n",ar);
}
int main()
{
    int a,b,c,n=1;
    printf("Welcome to the area Calculator...\n");
    do
    {
        printf("1. Triangle\n2. Square\n3. Rectangle\n4. Circle\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1: printf("Enter side of triangle\n");
                    scanf("%d %d %d",&a,&b,&c);
                    tri(a,b,c);
                    break;

            case 2: printf("Enter side of Square\n");
                    scanf("%d",&a);
                    sq(a);
                    break;
            case 3: printf("Enter sides of Rectangles\n");
                    scanf("%d %d",&a,&b);
                    rec(a,b);
                    break;
            case 4: printf("Enter Radius of circle\n");
                    scanf("%d",&a);
                    cir(a);
                    break;
            default: printf("Invalid Input......Exiting Application");
                    n=0;
        }
    }while(n!=0);
    return 0;

}
