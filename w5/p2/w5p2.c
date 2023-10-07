/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
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

#include <stdio.h>
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    const int JAN = 1;
    const int DEC = 12;
    int showyear, showmonth;
    double summorn = 0, sumeven = 0, sumcombined=0, averagemorn=0, averageeven=0,averagecombined=0;
    double morningrating, eveningrating;
    int i; 
    

    printf("General Well-being Log\n"
        "======================\n");

    do
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d%*c", &showyear, &showmonth);

        if (showyear < MIN_YEAR || showyear > MAX_YEAR)
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        if (showmonth < JAN || showmonth > DEC)
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }

    } while (showyear < MIN_YEAR || showyear > MAX_YEAR || showmonth < JAN || showmonth > DEC);

    printf("\n*** Log date set! ***\n");
    
    for ( i = 1; i <= LOG_DAYS; i++)
    {
        printf("\n");

        printf("%d-", showyear);
        if (showmonth == 1)
        {
            printf("JAN-");
        }
        else if (showmonth == 2)
        {
            printf("FEB-");
        }
        else if (showmonth == 3)
        {
            printf("MAR-");
        }
        else if (showmonth == 4)
        {
            printf("APR-");
        }
        else if (showmonth == 5)
        {
            printf("MAY-");
        }
        else if (showmonth == 6)
        {
            printf("JUN-");
        }
        else if (showmonth == 7)
        {
            printf("JUL-");
        }
        else if (showmonth == 8)
        {
            printf("AUG-");
        }
        else if (showmonth == 9)
        {
            printf("SEP-");
        }
        else if (showmonth == 10)
        {
            printf("OCT-");
        }
        else if (showmonth == 11)
        {
            printf("NOV-");
        }
        else if (showmonth == 12)
        {
            printf("DEC-");
        }
        printf("%02d", i);

        do
        {
            printf("\n   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningrating);

            if (morningrating < 0.0 || morningrating > 5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!");
            }
            else
            {
                summorn = summorn + morningrating;
            }

        } while (morningrating < 0.0 || morningrating > 5.0);

        do
        {
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningrating);

            if (eveningrating < 0.0 || eveningrating > 5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
            else
            {
                sumeven = sumeven + eveningrating;
            }

        } while (eveningrating < 0.0 || eveningrating > 5.0);

    }

    printf("\nSummary\n"
        "=======\n");

    sumcombined = summorn + sumeven;

    averagemorn = summorn / LOG_DAYS;
    averageeven = sumeven / LOG_DAYS;
    averagecombined = (averagemorn + averageeven)/2;

    printf("Morning total rating: %.3lf\n", summorn);
    printf("Evening total rating:  %.3lf\n", sumeven);
    printf("----------------------------\n");
    printf("Overall total rating: %.3lf\n\n", sumcombined);
    printf("Average morning rating:  %.1lf\n", averagemorn);
    printf("Average evening rating:  %.1lf\n", averageeven);
    printf("----------------------------\n");
    printf("Average overall rating:  %.1lf\n", averagecombined);

    return 0;
}
