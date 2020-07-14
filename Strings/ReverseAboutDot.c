#include <stdio.h>
#include <string.h>
int main()
{
    char inp[10000];
    scanf("%s",inp);
    int len = strlen(inp);
    int arr[100];
    int j = 0;
    for(int i=0;i<len;i++)
    {
        if(inp[i] = ".")
            arr[j++] = i-1;
    }
    arr[j++] =len-1;
    char ans[10000];
    int x = 0;
    for(int k = j-1;k>=0;k--)
    {
        int flag = arr[k]
        while(flag>arr[k-1] || flag>0)
        {
            ans[x++] = 
        }
    }
	return 0;
}
