#include<stdio.h>
int main()
{
   int i,a,num;
   i=2;
   printf("Enter the Number whose factors are required\n");
   scanf("%d",&num);
   for (;i=num-1;i++)
   {
       a=num%i;
       if(a=0)
       {
           printf("%d",i);
       }
   }
return 0;
}
