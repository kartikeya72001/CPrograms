#include<stdio.h>
int main()
{
    int n,i,n3,n1=0,n2=1,z,k=0;
    scanf("%d",&n);
    printf("%d\n%d%d\n",n1,n2,n2);
    n1++;
    for(i=0;i<(2*n)-3;i++)
    {
        k++;
        z=0;
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
        z++;
        if(z==k)
        {
            printf("\n");
        }
    }
    return 0;
}
