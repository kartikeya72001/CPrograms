#include<stdio.h>
int main()
{
	char c;
	printf("Enter the Grade!\n");
	scanf("%c",&c);
	switch(c)
	{
		case 'O': printf("Outstanding 95");
		break;
		case 'A': printf("Very Good 85");
		break;
		case 'B' :printf("Good 75");
		break;
		case 'C': printf("Above Average 60");
		break;
		case 'D': printf("Improvement Required 50");
		break;
		case 'E': printf("Just Passed 40");
		break;
		case 'F': printf("Failed 30");
		break;
		case 'M': printf("Medical Leave");
		break;
		default: printf("Incorrect Grade");
	}
	return 0;
}