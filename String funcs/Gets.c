#include <stdio.h>

int main()
{
	char name[50];

	printf("\n Please Enter your Full Name: \n");
	gets(name);

	printf("This is what you entered\n");
	printf("%s", name);

	return 0;
}
/*The C gets function is used to scan or read a line of text from a standard input
(stdin) device, and store it in the String variable. When it reads the newline
character then the get function will be terminated.*/
