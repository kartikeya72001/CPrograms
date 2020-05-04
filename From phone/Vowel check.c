#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U': printf("It is a vowel");
		break;
		default: printf("Not a Vowel");
		 
			
	}
	return 0;
}