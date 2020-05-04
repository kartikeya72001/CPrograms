/*#include<stdio.h>
int main()
{
    int marks[3]={0},i;
    for (i=0;i<3;i++)
    {
        printf("Enter the marks of student %d\n",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<3;i++)
    {
        if(marks[i]>=75)
            printf("Student %d passed with A grade\n",i+1);
        else if(marks[i]>=50)
            printf("Student %d passed with B grade\n",i+1);
        else if(marks[i]>=25)
            printf("Student %d passed with C grade\n",i+1);
        else
            printf("Student %d Failed\n",i+1);
    }
    return 0;

}*/
#include <stdio.h>

int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;

   printf("Input a string\n");
   gets(s);
   while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("%s\n", r);

   return 0;
}
