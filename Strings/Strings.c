#include<stdio.h>
int main()
{
    char str[] = "Kartikeya Agarwal";
    unsigned int count = 0;
    while (str[count]!='\0')
    {
        ++count;
    }
    printf("The length of the string \"%s\" is %d characters.\n",str,count);
    return 0;
}

