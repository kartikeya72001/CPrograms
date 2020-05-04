#include<stdio.h>
int main()
{
    int a,b,n,i,j,k,arr[n];
    char units[10],tens[10],hunds[10],thsn[10],tthsn[10];
    printf("Enter the length of the integer");
    scanf("%d",&n);
    printf("Enter the Integer");
    for (i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    if(arr[n]==1)
        units[10]="one";
    else if(arr[n]==2)
        units[10]=="two";
    else if(arr[n]==3)
        units[10]=="three";
    else if(arr[n]==4)
        units[10]=="four";
    else if(arr[n]==5)
        units[10]=="five";
    else if(arr[n]==6)
        units[10]=="six";
    else if(arr[n]==7)
        units[10]=="seven";
    else if(arr[n]==8)
        units[10]=="eight";
    else if(arr[n]==9)
        units[10]=="nine";
}
