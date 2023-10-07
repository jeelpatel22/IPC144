/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P2)
Full Name  : Jeelkumar Vinodkumar Patel
Student ID#: 115766222
Email      : jpatel391@mysenca.ca
Section    : NEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MINIMUM 500
#define MAXIMUM 400000

int main(void)
{
    double monincome; //monincome = monthly income of the user 

    int numlist; // numlist = number of desired items

    double productvalue[10]; // value of purchased product 

    int desiredproducts[10]; 

    char select[10]; // select the payment option 

    int preference[10]; //preference of the product 

    int j = 0; 

    double totalValue = 0; // totalValue = total cost of the shopping 

    int assumelist; // assumelist= number of forecasted(assumed)list 

    double calculatedyears, calculatedmonths; 

    int priorfilter; // priority value fatch by the scale of 1 to 3 

    double priorityamount; // amount by priority section 

    printf("+--------------------------+\n");

    printf("+   Wish List Forecaster   |\n");

    printf("+--------------------------+");

    do
    {
        printf("\n\nEnter your monthly NET income: $");

        scanf("%lf", &monincome);

        if (monincome < MINIMUM)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00");
        }
        if (monincome > MAXIMUM)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00");
        }
    } while (monincome < MINIMUM || monincome > MAXIMUM);

    do
    {
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &numlist);

        if (numlist < 1 || numlist > 10)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }

    } while (numlist < 1 || numlist > 10);

    printf("\n");

    for (j = 0; j < numlist; j++)
    {
        printf("Item-%d Details:\n", j + 1);

        do
        {
            printf("   Item cost: $");
            scanf("%lf", &productvalue[j]);

            if (productvalue[j] < 100)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            }
        } while (productvalue[j] < 100);

        do
        {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &desiredproducts[j]);

            if (desiredproducts[j] < 1 || desiredproducts[j] > 3)
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
        } while (desiredproducts[j] < 1 || desiredproducts[j] > 3);


        do
        {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &select[j]);

            if (select[j] == 'y')
            {
                printf("\n");
              
            }
            else if (select[j] == 'n')
            {
                printf("\n");
              
            }
            else
            {

                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
              
            }

        } while (select[j] != 'y' && select[j] != 'n');

    }

    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");

    for (j = 0; j < numlist; j++)
    {
        printf("  %d      %d        %c     %10.2lf\n", j + 1, desiredproducts[j], select[j], productvalue[j]);

        totalValue = totalValue + productvalue[j];
    }

    printf("---- -------- -------- -----------\n");
    printf("                      $ %10.2lf\n", totalValue);

    do
    {
        do
        {
            printf("\nHow do you want to forecast your wish list?\n");

            printf(" 1. All items (no filter)\n");
            
            printf(" 2. By priority\n");
            
            printf(" 0. Quit/Exit\n");
            
            printf("Selection: ");
            
            scanf("%d", &assumelist);

            if (assumelist < 0 || assumelist > 2)
            {
                printf("\nERROR: Invalid menu selection.\n");
            }

        } while (assumelist < 0 || assumelist > 2);

        if (assumelist == 1)
        {
            printf("\n====================================================\n");

            printf("Filter:   All items\n");
           
            priorityamount = totalValue;

            calculatedyears = ((priorityamount / monincome) / 12);
            
            calculatedmonths = (((calculatedyears - (int)calculatedyears) * 12) + 0.5);

            printf("Amount:   $%.2lf\n", priorityamount);

            printf("Forecast: %d years, %d months\n", (int)calculatedyears, (int)calculatedmonths);

            printf("NOTE: Financing options are available on some items.\n");

            printf("      You can likely reduce the estimated months.\n");
            
            printf("====================================================\n");

        }

        else if (assumelist == 2)
        {

            printf("\nWhat priority do you want to filter by? [1-3]: ");

            scanf("%d", &priorfilter);
                     
            printf("\n====================================================\n");
            
            printf("Filter:   by priority (%d)\n", priorfilter);

            for (j = 0; j < numlist; j++)
            {
                preference[j] = desiredproducts[j];
            }

            priorityamount = 0;

            for (j = 0; j < numlist; j++)
            {
                if (preference[j] == priorfilter)
                {
                    priorityamount += productvalue[j];
                }
            }

            calculatedyears = ((priorityamount / monincome) / 12);

            calculatedmonths = ((calculatedyears - (int)calculatedyears) * 12) + 0.8;

            printf("Amount:   $%.2lf\n", priorityamount);

            printf("Forecast: %d years, %d months\n", (int)calculatedyears, (int)calculatedmonths);

            if (priorfilter == 1 || priorfilter == 3)
            {
                printf("NOTE: Financing options are available on some items.\n");

                printf("      You can likely reduce the estimated months.\n");
            }
            printf("====================================================\n");
        }

        else if (assumelist == 0)
        {

            printf("\nBest of luck in all your future endeavours!\n");

        }

    } while (assumelist == 1 || assumelist == 2);

    return 0;
}