/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
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

int main(void)
{
    int inum; //number of the input Loop 

    char iname; //name of the Loop which will be run
    int j = 0;

    printf("+----------------------+\nLoop application STARTED\n+----------------------+\n\n");
    do
    {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &iname, &inum);
        if (iname == 'Q')
        {
            if (inum != 0)
            {
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
            }



        }
        if (iname == 'D')
        {
            if (inum >= 3 && inum <= 20)
            {
                j = 0;
                printf("DO-WHILE: ");
                do
                {
                    j++;

                    printf("%c", iname);
                } while (j < inum);

                printf("\n\n");

            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");

            }
        }
        if (iname == 'W')
        {
            if (inum >= 3 && inum <= 20)
            {
                j = 0;
                printf("WHILE   : ");
                while (j < inum)
                {
                    j++;
                    printf("%c", iname);

                }
                printf("\n\n");

            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");

            }
        }
        if (iname == 'F')
        {
            if (inum >= 3 && inum <= 20)
            {

                printf("FOR     : ");
                for (j = 0; j < inum; j++)
                {
                    printf("%c", iname);
                }
                printf("\n\n");


            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");

            }
        }
        if (iname != 'D' && iname != 'W' && iname != 'F' && iname != 'Q')
        {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
        else
        {

        }
    } while (iname != 'Q' || inum != 0);


    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");

    return 0;
}
