#include<stdio.h>
int power(int a, int b)
{
    if(a!=0)
        return(b*power(a-1,b));
    else
        return 1;
}


int main()
{
    int a,b,res;
    printf("Enter the Exponent and the base respectively\n");
    scanf("%d %d",&a,&b);
    res=power(a,b);
    printf("\n%d\n",res);
    return 0;
}
