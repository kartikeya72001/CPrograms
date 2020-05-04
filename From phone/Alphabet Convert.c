#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character to be converted\n");
	scanf("%c",&c);
	if (65<=c&&c<=90){
		c=c+32;
		printf("%c",c);
	}
	else if (97<=c&&c<=122){
		c=c-32;
		printf("%c",c);
	}
	else
    {
        printf("Invalid");
    }
	return 0;
}
