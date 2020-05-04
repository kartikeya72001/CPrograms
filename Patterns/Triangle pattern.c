/*#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-k;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
        k++;
    }
    return 0;
}*/
#include <stdio.h>

/*int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=n;j>i;j--)
        printf("  ");
      for(j=1;j<=i;j++)
          printf("%d ",j);
      for(j=j-2;j>=1;j--)
          printf("%d ",j);
      printf("\n");
    }
    return 0;
}*/
// C program to illustrate the above
// given pattern of numbers.
#include<stdio.h>

int main()
{
	int n, i, j, num = 1, gap;
	scanf("%d",&n);

	gap = n - 1;

	for ( j = 1 ; j <= n ; j++ )
	{
		num = j;

		for ( i = 1 ; i <= gap+(n-j) ; i++ )
			printf(" ");

		gap --;

		for ( i = 1 ; i <= j ; i++ )
		{
			printf("%d ", num);
			num++;
		}
		num--;
		num--;
		for ( i = 1 ; i < j ; i++)
		{
			printf("%d ", num);
			num--;
		}
		printf("\n");

	}

	return 0;
}


