#include<stdio.h>
int main()
{
    int dNo,noD;
    printf("Enter the first day of the month in numeral\n");
    scanf("%d",&dNo);
    printf("Enter the number of day in the month\n");
    scanf("%d",&noD);
    int days[7]={1,2,3,4,5,6,7};
    if(dNo==1)
    {
        for(int i=1;i<=noD;i++)
        {
            printf("%d",i);
            for(i=1;i<noD;)
            {
                printf("Monday");
            }
            for(i=2;;)
            {
                printf("Tuesday");
            }
            for(i=3;;)
            {
                printf("Wednesday");
            }
            for(i=4;;)
            {
                printf("Thursday");
            }
            for(i=5;;)
            {
                printf("Friday");
            }
            for(i=6;;)
            {
                printf("Saturday");
            }
            for(i=7;;)
            {
                printf("Sunday");
            }
            printf("\n");
        }
    }
    return 0;
}
