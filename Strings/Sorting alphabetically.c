#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char name[50][50];
    char temp[50][1];

    printf("Enter the names of the employees");
    for(i=0;i<50;i++)
    {
        for(j=0;j<50;j++)
        {
            scanf("%c",&name[i][j]);
        }
    }
    for(j=0;j<50;j++)
    {
        for(i=0;i<50;i++)
        {
            if(name[i][j]>name[i+1][j])
            {
                temp[50][1]=name[i][j];
            }
        }
    }
    return 0;
}
