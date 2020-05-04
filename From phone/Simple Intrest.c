#include <stdio.h>

int main()
{
    float principle, time, rate, SI;

    /* Input principle, rate and time */
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("\nEnter time: ");
    scanf("%f", &time);

    printf("\nEnter rate: ");
    scanf("%f", &rate);

    /* Calculate simple interest */
    SI = (principle * time * rate) / 100;

    /* Print the resultant value of SI */
    printf("\nSimple Interest = %f", SI);

    return 0;
}