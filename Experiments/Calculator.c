#include<stdio.h>
int main()
{
    long int a,b;
    float c,d;
    char ch;
    do
    {
        scanf("%c",&ch);
        switch(ch)
        {
            case '+' :scanf("%li %li",&a,&b);
                      printf("%li\n",a+b);
                      break;
            case '-' :scanf("%li %li\n",&a,&b);
                      printf("%li\n",a-b);
                      break;
            case '*' :scanf("%li %li",&a,&b);
                      printf("%li\n",a*b);
                      break;
            case '/' :scanf("%f %f",&c,&d);
                      printf("%4.2f\n",c/d);
                      break;
            case 'x': return 0;
            case 'X': return 0;
            case '\n': break;
            default : printf("Invalid operation. Try again.\n");
                      break;
        }
    }while(ch!='0');
	return 0;
}
