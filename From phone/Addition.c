// To calculate simple intrest
#include<stdio.h>
int main()
{
	int p,n;
	float r,si,amt;
	r=8.5;
	printf("Enter the Principle amount");
	printf("\nRate of intrest is %2.1f",r);
	scanf("%d",&p);
	scanf("%d",&n);
	si= p*n*r/100;
	printf("\n%3.2f",si);
	amt= si + p;
	printf("\n%3.2f",amt);
	
	return 0;

}