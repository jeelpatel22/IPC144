/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
Full Name  : Jeelkumar Vinodkumar Patel
Student ID#: 115766222
Email      : jpatel391@myseneca.ca
Section    : NEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS


#define desireditemlist 10 // maximum number of product is 10 


#include <stdio.h>


int main(void)
{
    
    double monincome = 0.0; //monincome= monthly income

    int numlist = 0; // numlist = number of desired items
    
    double productvalue[desireditemlist]; // value of purchased product 
    
    const double leastrate = 100.00; // minimum rate for the purchase
    
    int desiredproducts[desireditemlist];
    
    char select[desireditemlist]; // select the option for payment if it's financed or not
    
    int j = 0, k = 0;
    
    double totalValue = 0.0; // totalValue = total cost of the shopping  

    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");
    printf("\n");

    
    do
    {
        printf("Enter your monthly NET income: $");
        scanf("%lf", &monincome);


        if (monincome <= 500.00)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
        }


        if (monincome > 400000.00)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
        }

        printf("\n");

    } while (!(monincome >= 500.00 && monincome < 400000.00));


    do

    {
        printf("How many wish list items do you want to forecast?: ");

        scanf("%d", &numlist);

        if (!(numlist > 0 && numlist <= desireditemlist))
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }

        printf("\n");

    } while (!(numlist > 0 && numlist <= desireditemlist));

    for (j = 1; j <= numlist; j++)
    {
        printf("Item-%d Details:\n", j);

        do
        {
            printf("   Item cost: $");

            scanf("%lf", &productvalue[j - 1]);

            if (productvalue[j - 1] < leastrate)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            }

        } while (productvalue[j - 1] < leastrate);

        do
        {

            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");

            scanf("%d", &desiredproducts[j - 1]);

            if ((desiredproducts[j - 1] < 1) || (desiredproducts[j - 1] > 3))


            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }


        } while ((desiredproducts[j - 1] < 1) || (desiredproducts[j - 1] > 3));

        do
        {
            printf("   Does this item have financing options? [y/n]: ");

            scanf(" %c", &select[j - 1]);



            if (!(select[j - 1] == 'n' || select[j - 1] == 'y'))
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }


        } while (!(select[j - 1] == 'n' || select[j - 1] == 'y'));


        printf("\n");

    }

    printf("Item Priority Financed        Cost\n");

    printf("---- -------- -------- -----------\n");




    for (k = 1; k <= numlist; k++)
    {
        printf("  %d      %d        %c     %10.2lf\n", k, desiredproducts[k - 1], select[k - 1], productvalue[k - 1]);
        totalValue += productvalue[k - 1];
    }


    printf("---- -------- -------- -----------\n");

    printf("                      $ %.2lf\n\n", totalValue);

    printf("Best of luck in all your future endeavours!\n");

    return 0;
}