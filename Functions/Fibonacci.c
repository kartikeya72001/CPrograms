#include<stdio.h>

int fib(int a)
{
if ( a == 0 )
      return 0;
   else if ( a == 1 )
      return 1;
   else
      return ( fib(a-1) + fib(a-2) );
}

int main()
{
    int a,c,i=0,seq;
    printf("Enter the number of terms of fibonacci sequence required\n");
    scanf("%d",&a);
    seq= fib(a);
    printf("Fibonacci Sequence :\n");
for ( c = 1 ; c <= a ; c++ )
   {
      printf("%d\n", fib(i));
      i++;
   }
    return 0;
}
