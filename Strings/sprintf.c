#include<stdio.h>
int main()
{
    int i =10;
    char ch ='A';
    float a=3.141;
    char str[20];
    printf("%d\n%c\n%f\n",i,ch,a);
    sprintf(str,"%d %c %f",i,ch,a);
    printf("%s\n",str);
    return 0;
}
