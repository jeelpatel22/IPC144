/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
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

#define MIN_YEAR 2012

#define MAX_YEAR 2022

#include <stdio.h>

int main(void)
{
    int ShowYear, ShowMonth;
    const int JAN = 1, DEC = 12;
    

    printf("General Well-being Log\n");
    printf("======================\n");
   
    do {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &ShowYear, &ShowMonth);

        if (ShowYear < MIN_YEAR || ShowYear > MAX_YEAR) {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        if (ShowMonth < JAN || ShowMonth > DEC) {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
    } while ((ShowYear < MIN_YEAR || ShowYear > MAX_YEAR) || (ShowMonth < JAN || ShowMonth > DEC));

    printf("\n*** Log date set! ***\n");
    printf("\nLog starting date: %d-", ShowYear);
    
    if (ShowMonth == 1) 
    {
        printf("JAN-01");
    }
    else if (ShowMonth == 2) 
    {
        printf("FEB-01");
    }
    else if (ShowMonth == 3) 
    {
        printf("MAR-01");
    }
    else if (ShowMonth == 4) 
    {
        printf("APR-01");
    }
    else if (ShowMonth == 5) 
    {
        printf("MAY-01");
    }
    else if (ShowMonth == 6) 
    {
        printf("JUN-01");
    }
    else if (ShowMonth == 7) 
    {
        printf("JUL-01");
    }
    else if (ShowMonth == 8) 
    {
        printf("AUG-01");
    }
    else if (ShowMonth == 9) 
    {
        printf("SEP-01");
    }
    else if (ShowMonth == 10) 
    {
        printf("OCT-01");
    }
    else if (ShowMonth == 11) 
    {
        printf("NOV-01");
    }
    else if (ShowMonth == 12) 
    {
        printf("DEC-01");
    }

    printf("\n");
    return 0;
}