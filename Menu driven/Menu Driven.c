#include<stdio.h>
#include<stdlib.h>
int main()
{
    int entered,a,b,c,ttl,sml,lrg;
    a=b=c=0;
    float avg;
    printf("Welcome to the main menu");
    do
    {
    printf("\nENTER ANY OF THE FOLLOWING NUMBER TO PERFORM TASK\n .1 Enter three numbers\n .2 Calculate their Total\n .3 Calculate the average\n .4 Display Smallest\n .5 Display Largest\n");
    scanf("%d",&entered);
    switch(entered)
    {
    case 1: printf("Enter The Numbers\n");
            fflush(stdin);
            scanf("%d %d %d",&a,&b,&c);
            break;
    case 2: printf("Calculation of Total\n");
            ttl = a+b+c;
            printf("\n%d",ttl);
            break;
    case 3: printf("Calculation of Average\n");
            avg = (float)(a+b+c)/3;
            printf("\n%4.2f",avg);
            break;
    case 4: printf("Displaying Smallest\n");
            sml =a<b?a:b;
            sml =sml<c?sml:c;
            printf("\n%d",sml);
            break;
    case 5: printf("Displaying Largest\n");
            lrg =a>b?a:b;
            lrg =lrg>c?lrg:c;
            printf("\n%d",lrg);
            break;
    default: printf("\nInvalid input......Exiting Application");
           entered=0;
    break;
    }

    }while(entered!=0);
    return 0;
}
