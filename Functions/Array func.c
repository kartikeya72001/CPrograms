#include<stdio.h>
int arr[5];
int read()
{
    for(int i=0;i<5;i++)
    {
         scanf("%d",&arr[i]);
    }
    return 0;
}
int print()
{
    for (int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
int smallest()
{
    int minimum;
    minimum = arr[0];

    for (int c = 1; c < 5; c++)
    {
        if (arr[c] < minimum)
        {
           minimum = arr[c];
        }
    }
    return 0;
}
int main()
{
    int a;
    //int arr[5];
    printf("Array\n");
    do
    {
        printf("1. To Scan the array\n2. Print the array\n3. Find the smallest element\n");
        scanf("%d",a);
        switch (a)
        {
        case 1: read();
        break;
        case 2: print();
        break;
        case 3: smallest();
        break;
        default: printf("Invalid Code.....Exiting Application");
        }
    }while(a!=0);
    return 0;
}
