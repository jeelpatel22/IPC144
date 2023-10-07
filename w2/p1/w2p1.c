/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Jeelkumar Vinodkumar Patel
Student ID#: 115766222
Email      : jpatel391@myseneca.ca
Section    : E

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


    int main(void)
    {
        const double TAX = 0.13;
        const char patSize = 'S';
        printf("Set Shirt Prices\n");
        printf("================\n");

        double j, k, l;

        int m;

        printf("Enter the price for a SMALL shirt: $");
        scanf("%lf", &j);

        printf("Enter the price for a MEDIUM shirt: $");
        scanf("%lf", &k);

        printf("Enter the price for a LARGE shirt: $");
        scanf("%lf", &l);

        printf("\nShirt Store Price List\n");
        printf("======================\n");
        printf("SMALL  : $%.2f\n", j);
        printf("MEDIUM : $%.2f\n", k);
        printf("LARGE  : $%.2f", l);

        printf("\n\nPatty's shirt size is '%c'\n",patSize);
        printf("Number of shirts Patty is buying: ");
        scanf("%d", &m);

        printf("\nPatty's shopping cart...\n");
        printf("Contains : %d shirts\n", m);

        int x = (((m * j) + 0.005) * 100);
        int y = ((((m * j) * TAX) + 0.005) * 100);
        int z = ((x + y));
        printf("Sub-total: $%8.4lf\n", x / 100.0);
        printf("Taxes    : $%8.4lf\n", y / 100.0);
        printf("Total    : $%8.4lf\n", z / 100.0);
        return 0;
    }
    