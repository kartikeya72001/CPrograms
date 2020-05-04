#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the desired Number");
	scanf("%d",&a);
	b=a%2;
	if (b=0){
		printf("\nNumer is Even");
	}
	else{
		printf("\nNumer is Odd");
	}
	return 0;
}