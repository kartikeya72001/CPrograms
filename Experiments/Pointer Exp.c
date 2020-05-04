#include<stdio.h>
int main()
{
    int i=3;
    int *j;
    j=&i;
    printf("Address(&i) of i=%u\n",&i);
    printf("Address(j) of i=%u\n",j);
    printf("Address(&j) of j=%u\n",&j);
    printf("Value(j) of j=%u\n",j);
    printf("Value(i) of i=%d\n",i);
    printf("Value((*&i)) of i=%d\n",*(&i));
    printf("Value(*j) of i=%d\n",*j);
    return 0;

}
