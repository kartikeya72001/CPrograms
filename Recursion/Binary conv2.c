#include<stdio.h>
int main()
{
    int arr[10]={0},n,i;
    printf("Enter the number to be converted\n");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        arr[i]=n%2;
        n=n/2;
    }
    printf("The required Binary is : \n");
    for (int i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
