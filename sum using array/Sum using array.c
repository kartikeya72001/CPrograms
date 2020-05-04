#include <stdio.h>

int main()
{
    //Sum of n natural  numbers
   int n, sum = 0, c, array[100]={};
   printf("Enter the numbers of Natural numbers to be added\n");
   scanf("%d", &n);

   for (int i=0;i<100;i++)
   {
       array[i]=i+1;
   }
   for (c = 0; c < n; c++)
   {
      sum = sum + array[c];
   }

   printf("Sum = %d\n", sum);

   return 0;
}
