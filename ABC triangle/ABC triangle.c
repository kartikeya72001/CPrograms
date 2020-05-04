#include<stdio.h>
int main()
{
    char l ='A';
    for (int i= 0;i<5;i++)
    {
        for (int j=i;j<5;++j)
        {
            printf(" ");
        }
        for (char k= 'A';k<=i+65;++k)
        {
            printf("%c",k);
        }
        for(l+=i;l<=65;--l);
        {
            printf("%c",l);
        }
        printf("\n");
    }
    return 0;
}
