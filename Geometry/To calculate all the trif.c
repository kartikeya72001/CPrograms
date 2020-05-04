#include<stdio.h>
#include<math.h>
int main()
{
    float x,s,c,t;
    printf ("Enter the value of Theta in radians\n");
    scanf("%d",&x);

    s = sin(x);
    c = cos(x);
    t = tan(x);
    printf("Sinx = %f\ncosx = %f\ntanx = %f",s,c,t);
    return 0;
}
