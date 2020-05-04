#include<stdio.h>
int main()
{
	int a10,a20,a50,a100,ttlamt;
	printf("Enter number of 10, 20, 50, 100 rupees \nnotes deposited!");
	scanf("%d\n%d\n%d\n%d,",&a10,&a20,&a50,&a100);
	ttlamt = a10*10 + a20*20 + a50*50 + a100*100;
	printf("\nTotal Amount in piggy bank is %d",ttlamt);
	return 0;
}