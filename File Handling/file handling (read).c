#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[80];
    fp = fopen("C:\\Users\\karti\\Desktop\\Codes\\C\\Experiments\\testFile2.txt","w");
    if (fp==NULL)
    {
        printf("File Cannot be open");
        exit(1);
    }
    printf("\nEnter a few lines of text\n");
    while(strlen(gets(s))>0)
    {
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    printf("File Contents are being Read.....\n");
    fp = fopen("C:\\Users\\karti\\Desktop\\Codes\\C\\Experiments\\testFile2.txt","r");
    if(fp==NULL)
    {
        printf("Error Reading File...");
        exit(2);
    }
    while(fgets(s,79,fp)!=NULL)
    {
        printf("%s",s);
    }
    fclose(fp);
    return 0;

}
