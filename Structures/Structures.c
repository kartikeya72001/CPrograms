#include<stdio.h>
#include<string.h>
struct student
{
    int rno;
    char name[50];
    int marks;
}s1,s2,s3;
int main()
{
    //Names
printf("Enter the Name of the scholar 1\n");
gets(s1.name);
printf("Enter the Name of the scholar 2\n");
gets(s2.name);
printf("Enter the Name of the scholar 3\n");
gets(s3.name);
//Marks
printf("Enter the marks of the scholar 1\n");
scanf("%d",&s1.marks);
printf("Enter the marks of the scholar 2\n");
scanf("%d",&s2.marks);
printf("Enter the marks of the scholar 3\n");
scanf("%d",&s3.marks);
//Roll Number
printf("Enter the Roll No. of the scholar 1\n");
scanf("%d",&s1.rno);
printf("Enter the Roll No. of the scholar 2\n");
scanf("%d",&s2.rno);
printf("Enter the Roll No. of the scholar 3\n");
scanf("%d",&s3.rno);
//Printing the data
printf("\n\nRoll Number    Marks       Name\n");
printf("  %d           ",s1.rno);
printf("%d   ",s1.marks);
printf("     %s\n",s1.name);
printf("  %d           ",s2.rno);
printf("%d   ",s2.marks);
printf("     %s\n",s2.name);
printf("  %d           ",s3.rno);
printf("%d   ",s3.marks);
printf("     %s\n",s3.name);

return 0;
}
