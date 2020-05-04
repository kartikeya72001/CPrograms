#include<stdio.h>
#include<string.h>
struct student
{
    int rno;
    char name[50];
    int marks[3];
}s1,s2,s3;
int main()
{
    int i=0;
    float a=0,b=0,c=0;
    printf("Enter the Name of the scholar 1\n");
    gets(s1.name);
    printf("Enter the Name of the scholar 2\n");
    gets(s2.name);
    printf("Enter the Name of the scholar 3\n");
    gets(s3.name);
    printf("Enter the Roll No. of the scholar 1\n");
    scanf("%d",&s1.rno);
    printf("Enter the Roll No. of the scholar 2\n");
    scanf("%d",&s2.rno);
    printf("Enter the Roll No. of the scholar 3\n");
    scanf("%d",&s3.rno);
    printf("Enter the marks of Student 1\n");
    for(i;i<3;i++)
    {
        scanf("%d",&s1.marks[i]);
    }
    printf("Enter the marks of Student 2\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&s2.marks[i]);
    }
    printf("Enter the marks of Student 3\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&s3.marks[i]);
    }
    for (i=0;i<3;i++)
    {
        a=a+s1.marks[i];
    }
    for (i=0;i<3;i++)
    {
        b=b+s2.marks[i];
    }
    for (i=0;i<3;i++)
    {
        c=c+s3.marks[i];
    }
    printf("Average marks of student 1 are %4.2f\n",a/3);
    printf("Average marks of student 2 are %4.2f\n",b/3);
    printf("Average marks of student 3 are %4.2f\n",c/3);
    return 0;
}
