#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int len;
    int z;

    scanf("%s", ch);
    len = strlen(ch);

    for(int i = 0; i<len ; i++)
    {

        z = (ch[i]);
        if(z>64 && z<91)
        {
            printf("\n");
        }
        printf("%c", ch[i]);
    }
    return 0;
}
