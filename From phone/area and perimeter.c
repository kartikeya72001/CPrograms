#include<stdio.h>
int main()
{
	int wid,ht,peri,ar;
	printf("Enter The value of height\n");
	scanf("%d",&ht);
	printf("Enter the value of width\n");
	scanf("%d",&wid);
	
	peri = 2*(wid+ht);
	ar = (wid*ht);
	printf("%d %d",ar,peri);
	return 0;
}