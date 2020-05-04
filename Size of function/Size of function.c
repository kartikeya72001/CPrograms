#include<stdio.h>
int main()
{
    int a,d,e,f;
    float b;
    double c;
    d = sizeof(a);
    e = sizeof(b);
    f = sizeof(c);
    printf("int = %d\n",d);
    printf("float = %d\n",e);
    printf("double = %d",f);
    return 0;
}
