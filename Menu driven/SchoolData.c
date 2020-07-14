#include<stdio.h>
#include<string.h>
struct schoolData
{
    char name[50];
    int rno;
    char address[50];
    int sub[3];
    int phone;
}s1,s2,s3,s4,s5;
int main()
{
    int i,a=1,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,n;
    printf("Enter the name of first student\n");
    gets(s1.name);
    printf("\nEnter the name of second student\n");
    gets(s2.name);
    printf("\nEnter the name of third student\n");
    gets(s3.name);
    printf("\nEnter the name of fourth student\n");
    gets(s4.name);
    printf("\nEnter the Roll Number of student 1\n");
    scanf("%d",&s1.rno);
    printf("Enter the Roll Number of student 2\n");
    scanf("%d",&s2.rno);
    printf("Enter the Roll Number of student 3\n");
    scanf("%d",&s3.rno);
    printf("Enter the Roll Number of student 4\n");
    scanf("%d",&s4.rno);
    printf("Enter the Address of student 1\n");
    //gets(s1.address);
    scanf("%s",s1.address);
    printf("Enter the Address of student 2\n");
    //gets(s2.address);
    scanf("%s",s2.address);
    printf("Enter the Address of student 3\n");
    //gets(s3.address);
    scanf("%s",s3.address);
    printf("Enter the Address of student 4\n");
    //gets(s4.address);
    scanf("%s",s4.address);
    printf("Enter the marks of student 1\n");
    for (i=0;i<3;i++)
    {
        printf("Subject %d:",i+1);
        scanf("%d",&s1.sub[i]);
    }
    printf("Enter the marks of student 2\n");
    for (i=0;i<3;i++)
    {
        printf("Subject %d:",i+1);
        scanf("%d",&s2.sub[i]);
    }
    printf("Enter the marks of student 3\n");
    for (i=0;i<3;i++)
    {
        printf("Subject %d:",i+1);
        scanf("%d",&s3.sub[i]);
    }
    printf("Enter the marks of student 4\n");
    for (i=0;i<3;i++)
    {
        printf("Subject %d:",i+1);
        scanf("%d",&s4.sub[i]);
    }
    printf("Enter the phone number of student 1\n");
    scanf("%d",&s1.phone);
    printf("Enter the phone number of student 2\n");
    scanf("%d",&s2.phone);
    printf("Enter the phone number of student 3\n");
    scanf("%d",&s3.phone);
    printf("Enter the phone number of student 4\n");
    scanf("%d",&s4.phone);
    printf("Your Data has been saved....Entering Menu\n");
    do
    {
        printf(".1 Display Entered Data\n.2 Print average marks\n.3 Enter student record or Update Student Record\n.4 Delete student record\n Press any other key to exit\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1: printf("Name: ");
                    puts(s1.name);
                    printf("Roll Number : %d\nAddress :",s1.rno);
                    puts(s1.address);
                    for (i=0;i<3;i++)
                    {
                        printf("Marks Subject %d: %d\n",i+1,s1.sub[i]);
                    }
                    printf("Phone Number: %d\n",s1.phone);

                    printf("\nName: ");
                    puts(s2.name);
                    printf("Roll Number : %d\nAddress :",s2.rno);
                    puts(s2.address);
                    for (i=0;i<3;i++)
                    {
                        printf("Marks Subject %d: %d\n",i+1,s2.sub[i]);
                    }
                    printf("Phone Number: %d\n",s2.phone);

                    printf("\nName: ");
                    puts(s3.name);
                    printf("Roll Number : %d\nAddress :",s3.rno);
                    puts(s3.address);
                    for (i=0;i<3;i++)
                    {
                        printf("Marks Subject %d: %d\n",i+1,s3.sub[i]);
                    }
                    printf("Phone Number: %d\n",s3.phone);

                    printf("\nName: ");
                    puts(s4.name);
                    printf("Roll Number : %d\nAddress :",s4.rno);
                    puts(s4.address);
                    for (i=0;i<3;i++)
                    {
                        printf("Marks Subject %d: %d\n",i+1,s4.sub[i]);
                    }
                    printf("Phone Number: %d\n",s4.phone);
                    break;
            case 2: for (i=0;i<3;i++)
                    {
                        sum = sum+s1.sub[i];
                        sum = sum+s2.sub[i];
                        sum = sum+s3.sub[i];
                        sum = sum+s4.sub[i];
                    }
                    for (i=0;i<3;i++)
                    {
                        sum1 = sum+s1.sub[i];
                    }
                    for (i=0;i<3;i++)
                    {
                        sum2 = sum+s1.sub[i];
                    }
                    for (i=0;i<3;i++)
                    {
                        sum3 = sum+s1.sub[i];
                    }
                    for (i=0;i<3;i++)
                    {
                        sum4 = sum+s1.sub[i];
                    }
                    printf("Average Marks of Class: %d\n",(sum/12));
                    printf("Average Marks of student 1: %d\n",(sum1/3));
                    printf("Average Marks of student 2: %d\n",(sum2/3));
                    printf("Average Marks of student 3: %d\n",(sum3/3));
                    printf("Average Marks of student 4: %d\n",(sum4/3));
                    break;
            case 3: printf("Enter column number which is to be updated\n");
                    scanf("%d",&n);
                    if (n=1)
                    {
                        printf("Enter student details\n");
                        printf("Enter the name of student\n");
                        gets(s1.name);
                        printf("\nEnter the Roll Number of student\n");
                        scanf("%d",&s1.rno);
                        printf("Enter the Address of student\n");
                        gets(s1.address);
                        printf("Enter the marks of student\n");
                        for (i=0;i<3;i++)
                        {
                            printf("Subject %d",i+1);
                            scanf("%d\n",&s1.sub[i]);
                        }
                    }
                    else if(n=2)
                    {
                        printf("Enter student details\n");
                        printf("Enter the name of student\n");
                        gets(s2.name);
                        printf("\nEnter the Roll Number of student\n");
                        scanf("%d",&s2.rno);
                        printf("Enter the Address of student\n");
                        gets(s2.address);
                        printf("Enter the marks of student\n");
                        for (i=0;i<3;i++)
                        {
                            printf("Subject %d",i+1);
                            scanf("%d",&s2.sub[i]);
                        }
                    }
                    else if(n=3)
                    {
                        printf("Enter student details\n");
                        printf("Enter the name of student\n");
                        gets(s3.name);
                        printf("\nEnter the Roll Number of student\n");
                        scanf("%d",&s3.rno);
                        printf("Enter the Address of student\n");
                        gets(s3.address);
                        printf("Enter the marks of student\n");
                        for (i=0;i<3;i++)
                        {
                            printf("Subject %d",i+1);
                            scanf("%d",&s3.sub[i]);
                        }
                    }
                    else if(n=4)
                    {
                        printf("Enter student details\n");
                        printf("Enter the name of student\n");
                        gets(s4.name);
                        printf("\nEnter the Roll Number of student\n");
                        scanf("%d",&s4.rno);
                        printf("Enter the Address of student\n");
                        gets(s4.address);
                        printf("Enter the marks of student\n");
                        for (i=0;i<3;i++)
                        {
                            printf("Subject %d",i+1);
                            scanf("%d",&s4.sub[i]);
                        }
                    }
                    else if(n=5)
                    {
                        printf("Enter student details\n");
                        printf("Enter the name of new student\n");
                        gets(s5.name);
                        printf("\nEnter the Roll Number of new student\n");
                        scanf("%d",&s5.rno);
                        printf("Enter the Address of new student\n");
                        gets(s5.address);
                        printf("Enter the marks of new student\n");
                        for (i=0;i<3;i++)
                        {
                            printf("Subject %d",i+1);
                            scanf("%d",&s5.sub[i]);
                        }
                    }
                    break;
            case 4: printf("Enter the student number which is to be deleted\n");
                    scanf("%d",&n);
                    if(n=1)
                    {
                        s1.address[50]=0;
                        s1.name[50]=0;
                        s1.sub[3]=0;
                        s1.phone=0;
                        s1.rno=0;
                    }
                    if(n=2)
                    {
                        s2.address[50]=0;
                        s2.name[50]=0;
                        s2.sub[3]=0;
                        s2.phone=0;
                        s2.rno=0;
                    }
                    if(n=3)
                    {
                        s3.address[50]=0;
                        s3.name[50]=0;
                        s3.sub[3]=0;
                        s3.phone=0;
                        s3.rno=0;
                    }
                    if(n=4)
                    {
                        s4.address[50]=0;
                        s4.name[50]=0;
                        s4.sub[3]=0;
                        s4.phone=0;
                        s4.rno=0;
                    }
                    if(n=5)
                    {
                        s5.address[50]=0;
                        s5.name[50]=0;
                        s5.sub[3]=0;
                        s5.phone=0;
                        s5.rno=0;
                    }
                    break;
                    default: printf("Incorrect Input......Exiting Application\n");
        }
    }while(a!=0);
    return 0;
}
