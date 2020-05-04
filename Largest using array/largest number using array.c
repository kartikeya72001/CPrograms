#include<stdio.h>
int main ()
{
    int n,i,largest;
    printf("Enter the size of the array to be created:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    largest = array[0];
    for (i=0;i<n;i++)
    {
        if (largest<array[i])
        {
            largest = array[i];
        }
    }
    printf("\nlargest: %d\n",largest);

    return 0;
}
