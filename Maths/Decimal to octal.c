#include<stdio.h>
#include<math.h>

void dec_oct(long int num)   // Function Definition
{
long int rem[50],i=0,length=0;
while(num>0)
 {
 rem[i]=num%8;
 num=num/8;
 i++;
 length++;
 }
     for(i=length-1;i>=0;i--)
             printf("%ld",rem[i]);
}
//================================================
void main()
{
long int num;
 scanf("%ld",&num);

    dec_oct(num);   // Calling function
}
