#include <stdio.h>

int main()
{
	float a;
    int b;
    printf("Enter the number!");
    scanf("%f",&a);
    b=a;
    printf("\n%d",b);
    b=b%10;
    printf("\n%d",b);
	return 0;
}
