#include<stdio.h>
int main()
{
	int a,b,c,sNo;
	scanf("%d\n %d\n %d",&a,&b,&c);
	sNo = a<b ? a:b;
	sNo = sNo<c ? sNo:c;
	printf("\n%d",sNo);
	
	return 0;
}