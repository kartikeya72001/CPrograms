#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float root1,root2,d;
	printf("Enter the coefficients of the quadratic equation to be solved in the format ax^2+bx+c\n");
	scanf("%d %d %d",&a,&b,&c);
	d=(b*b)-4*a*c;
	if(d>=0)
    {
        root1 = ((-b+(sqrt(d)))/2*a);
        root2 = ((-b-(sqrt(d)))/2*a);
        if(root1==root2)
        {
            printf("Real and Equal\n");
        }
        else if(root1!=root2)
        {
            printf("Real and Distinct\n");
        }
        printf("The roots of the quadratic equation are %0.2f and %0.2f",root1,root2);
	}
	else{
		printf("Imaginary roots! Equation Can't be solved!");
	}
	return 0;

}
