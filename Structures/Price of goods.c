#include<stdio.h>
#include<math.h>
struct goods
{
    int bp;
    char pd[50];
    float gst;
    int qtty;
    float fp;
}g1,g2,g3;
int main()
{
    float tpd;
    double tpr;

    printf("Enter the name of the entity 1\n");
    gets(g1.pd);
    printf("Enter the name of the entity 2\n");
    gets(g2.pd);
    printf("Enter the name of the entity 3\n");
    gets(g3.pd);

    printf("Enter the price of the entity 1 in dollars\n");
    scanf("%d",&g1.bp);
    printf("Enter the price of the entity 2 in dollars\n");
    scanf("%d",&g2.bp);
    printf("Enter the price of the entity 3 in dollars\n");
    scanf("%d",&g3.bp);

    printf("Enter the gst of the entity 1\n");
    scanf("%f",&g1.gst);
    printf("Enter the gst of the entity 2\n");
    scanf("%f",&g2.gst);
    printf("Enter the gst of the entity 3\n");
    scanf("%f",&g3.gst);

    printf("Enter the quantity of the entity 1\n");
    scanf("%d",&g1.qtty);
    printf("Enter the quantity of the entity 2\n");
    scanf("%d",&g2.qtty);
    printf("Enter the quantity of the entity 3\n");
    scanf("%d",&g3.qtty);


    g1.fp = ((((g1.gst/100)*g1.bp)+g1.bp)*g1.qtty);
    g2.fp = ((((g2.gst/100)*g2.bp)+g2.bp)*g2.qtty);
    g3.fp = ((((g3.gst/100)*g3.bp)+g3.bp)*g3.qtty);

    printf("Entity       Quantity      GST      Base Price     Total Price\n");


    printf("%s        ",g1.pd);
    printf("%d          ",g1.qtty);
    printf(" %4.2f      ",g1.gst);
    printf("  %d$        ",g1.bp);
    printf("%10.2f$\n",g1.fp);

    printf("%s        ",g2.pd);
    printf(" %d          ",g2.qtty);
    printf(" %4.2f      ",g2.gst);
    printf("  %d$       ",g2.bp);
    printf(" %10.2f$\n",g2.fp);

    printf("%s         ",g3.pd);
    printf(" %d          ",g3.qtty);
    printf(" %4.2f      ",g3.gst);
    printf("   %d$       ",g3.bp);
    printf(" %10.2f$\n",g3.fp);
    tpd = (g1.fp+g2.fp+g3.fp);
    tpr = tpd*71.71;
    printf("\nTotal payment to be made = %5.2f$",tpd);
    printf("\nTotal payment to be made = %10.2lf Rupees\n",tpr);

    return 0;
}
