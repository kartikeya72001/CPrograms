#include<stdio.h>

int main()
{
    //Declaration of the variable and input

    int a,b,c,dd3,mm3,yy3,dd1,mm1,yy1,dd2,mm2,yy2;

    printf("Enter all ages in dd/mm/yyyy format\n");

    printf("Enter the age of the Employee 1\n");

    scanf("%d/%d/%d",&dd1,&mm1,&yy1);

    printf("Enter the age of the Employee 2\n");

    scanf("%d/%d/%d",&dd2,&mm2,&yy2);

    printf("Enter the age of the Employee 3\n");

    scanf("%d/%d/%d",&dd3,&mm3,&yy3);

    //To calculate the oldest Employee

    if(yy1!=yy2&&yy2!=yy3)
    {

       if(yy1<yy2&&yy1<yy2)
       {
           printf("Employee 1 is the oldest with DOB %d/%d/%d\n",dd1,mm1,yy1);
       }
       else if (yy2<yy1&&yy2<yy3)
       {
           printf("Employee 2 is the oldest with DOB %d/%d/%d\n",dd2,mm2,yy2);
       }
       else if (yy3<yy2&&yy3<yy1)
       {
           printf("Employee 3 is the oldest with DOB %d/%d/%d\n",dd3,mm3,yy3);
       }
    }
    else if(mm1!=mm2&&mm2!=mm3)
    {
        if(mm1<mm2&&mm1<mm2)
       {
           printf("Employee 1 is the oldest with DOB %d/%d/%d\n",dd1,mm1,yy1);
       }
       else if (mm2<mm1&&mm2<mm3)
       {
           printf("Employee 2 is the oldest with DOB %d/%d/%d\n",dd2,mm2,yy2);
       }
       else if (mm3<mm2&&mm3<mm1)
       {
           printf("Employee 3 is the oldest with DOB %d/%d/%d\n",dd3,mm3,yy3);
       }
    }
    else if(dd1!=dd2&&dd2!=dd3)
    {
        if(dd1<dd2&&dd1<dd2)
       {
           printf("Employee 1 is the oldest with DOB %d/%d/%d\n",dd1,mm1,yy1);
       }
       else if (dd2<dd1&&dd2<dd3)
       {
           printf("Employee 2 is the oldest with DOB %d/%d/%d\n",dd2,mm2,yy2);
       }
       else if (dd3<dd2&&dd3<dd1)
       {
           printf("Employee 3 is the oldest with DOB %d/%d/%d\n",dd3,mm3,yy3);
       }
    }
    printf("While ");
    //Part one breaks here
    //To calculate the youngest Employee
        if(yy1!=yy2&&yy2!=yy3)
        {

            if(yy1>yy2&&yy1>yy2)
            {
                printf("Employee 1 is the youngest with DOB %d/%d/%d\n",dd1,mm1,yy1);
            }
            else if (yy2>yy1&&yy2>yy3)
            {
                printf("Employee 2 is the youngest with DOB %d/%d/%d\n",dd2,mm2,yy2);
            }
            else if (yy3>yy2&&yy3>yy1)
            {
                printf("Employee 3 is the youngest with DOB %d/%d/%d\n",dd3,mm3,yy3);
            }
        }
        else if(mm1!=mm2&&mm2!=mm3)
        {
            if(mm1>mm2&&mm1>mm2)
            {
                printf("Employee 1 is the youngest with DOB %d/%d/%d\n",dd1,mm1,yy1);
            }
            else if (mm2>mm1&&mm2>mm3)
            {
                printf("Employee 2 is the youngest with DOB %d/%d/%d\n",dd2,mm2,yy2);
            }
            else if (mm3>mm2&&mm3>mm1)
            {
                printf("Employee 3 is the youngest with DOB %d/%d/%d\n",dd3,mm3,yy3);
            }
        }
        else if(dd1!=dd2&&dd2!=dd3)
        {
            if(dd1>dd2&&dd1>dd2)
            {
                printf("Employee 1 is the youngest with DOB %d/%d/%d\n",dd1,mm1,yy1);
            }
            else if (dd2>dd1&&dd2>dd3)
            {
                printf("Employee 2 is the youngest with DOB %d/%d/%d\n",dd2,mm2,yy2);
            }
            else if (dd3>dd2&&dd3>dd1)
            {
                printf("Employee 3 is the youngest with DOB %d/%d/%d\n",dd3,mm3,yy3);
            }
        }
    return 0;
}
