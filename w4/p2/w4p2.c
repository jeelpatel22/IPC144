    /*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Jeelkumar Vinodkumar Patel
Student ID#: 115766222
Email      : jpatel391@myseneca.ca
Section    : NEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

    int main(void)
    {

        int numapple = 0, numorange = 0, numpears = 0, numtomatoes = 0, numcabbage = 0; //numapple =Number of Apple, numorange=  Number of Oranges, numpears= Number of Pears, numtomatoes= Number of Tomatoes, numcabbage= Number of Cabbage
        int chosenapple = 0, chosenpears = 0, chosenoranges = 0, chosentomatoes = 0, chosencabbage = 0; // chosenapple = selected apple, chosenoranges= selected oranges, chosenpears= selected pears
        int shallcontinue = 0; // shall countinue further?


        do
        {

            printf("Grocery Shopping\n");
            printf("================\n");


            do
            {
                printf("How many APPLES do you need? : ");
                scanf("%d", &numapple);
                if (numapple < 0)
                {
                    printf("ERROR: Value must be 0 or more.\n");
                }
            } while (numapple < 0);
            printf("\n");



            do
            {
                printf("How many ORANGES do you need? : ");
                scanf("%d", &numorange);
                if (numorange < 0)
                {
                    printf("ERROR: Value must be 0 or more.\n");
                }
            } while (numorange < 0);
            printf("\n");



            do
            {
                printf("How many PEARS do you need? : ");
                scanf("%d", &numpears);
                if (numpears < 0)
                {
                    printf("ERROR: Value must be 0 or more.\n");
                }
            } while (numpears < 0);
            printf("\n");



            do
            {
                printf("How many TOMATOES do you need? : ");
                scanf("%d", &numtomatoes);
                if (numtomatoes < 0)
                {
                    printf("ERROR: Value must be 0 or more.\n");
                }
            } while (numtomatoes < 0);
            printf("\n");



            do
            {
                printf("How many CABBAGES do you need? : ");
                scanf("%d", &numcabbage);
                if (numcabbage < 0)
                {
                    printf("ERROR: Value must be 0 or more.\n");
                }
            } while (numcabbage < 0);
            printf("\n");



            printf("--------------------------\n");
            printf("Time to pick the products!\n");
            printf("--------------------------\n\n");



            if (numapple)
            {
                do
                {
                    printf("Pick some APPLES... how many did you pick? : ");
                    scanf("%d", &chosenapple);
                    if (chosenapple < 1)
                    {
                        printf("ERROR: You must pick at least 1!\n");
                    }
                    else
                    {
                        if (numapple < chosenapple)
                        {
                            printf("You picked too many... only %d more APPLE(S) are needed.\n", numapple);
                        }
                        else if (numapple)
                        {
                            numapple = numapple - chosenapple;
                            if (numapple)
                            {
                                printf("Looks like we still need some APPLES...\n");
                            }
                        }
                    }
                } while (numapple);
                printf("Great, that's the apples done!\n\n");
            }


            if (numpears)
            {
                do
                {
                    printf("Pick some PEARS... how many did you pick? : ");
                    scanf("%d", &chosenpears);


                    if (chosenpears < 1)
                    {
                        printf("ERROR: You must pick at least 1!\n");
                    }
                    else
                    {
                        if (numpears < chosenpears)
                        {
                            printf("You picked too many... only %d more PEAR(S) are needed.\n", numpears);
                        }
                        else if (numpears)
                        {
                            numpears = numpears - chosenpears;
                            if (numpears)
                            {
                                printf("Looks like we still need some PEARS...\n");
                            }
                        }
                    }
                } while (numpears);
                printf("Great, that's the pears done!\n\n");
            }


            if (numorange)
            {
                do
                {
                    printf("Pick some ORANGES... how many did you pick? : ");
                    scanf("%d", &chosenoranges);
                    if (chosenoranges < 1)
                    {
                        printf("ERROR: You must pick at least 1!\n");
                    }
                    else
                    {
                        if (numorange < chosenoranges)
                        {
                            printf("You picked too many... only %d more ORANGE(S) are needed.\n", numorange);
                        }
                        else if (numorange)
                        {
                            numorange = numorange - chosenoranges;
                            if (numorange)
                            {
                                printf("Looks like we still need some ORANGES...\n");
                            }
                        }
                    }
                } while (numorange);
                printf("Great, that's the oranges done!\n\n");
            }
            if (numtomatoes)
            {
                do
                {
                    printf("Pick some TOMATOES... how many did you pick? : ");
                    scanf("%d", &chosentomatoes);
                    if (chosentomatoes < 1)
                    {
                        printf("ERROR: You must pick at least 1!\n");
                    }
                    else
                    {
                        if (numtomatoes < chosentomatoes)
                        {
                            printf("You picked too many... only %d more TOMATO(ES) are needed.\n", numtomatoes);
                        }
                        else if (numtomatoes)
                        {
                            numtomatoes = numtomatoes - chosentomatoes;
                            if (numtomatoes)
                            {
                                printf("Looks like we still need some TOMATOES...\n");
                            }
                        }
                    }
                } while (numtomatoes);
                printf("Great, that's the tomatoes done!\n\n");
            }
            if (numcabbage)
            {
                do
                {
                    printf("Pick some CABBAGES... how many did you pick? : ");
                    scanf("%d", &chosencabbage);
                    if (chosencabbage < 1)
                    {
                        printf("ERROR: You must pick at least 1!\n");
                    }
                    else
                    {
                        if (numcabbage < chosencabbage)
                        {
                            printf("You picked too many... only %d more CABBAGE(S) are needed.\n", numcabbage);
                        }
                        else if (numcabbage)
                        {
                            numcabbage = numcabbage - chosencabbage;
                            if (numcabbage)
                            {
                                printf("Looks like we still need some CABBAGES...\n");
                            }
                        }
                    }
                } while (numcabbage);
                printf("Great, that's the cabbages done!\n\n");
            }


            printf("All the items are picked!\n\n");
            printf("Do another shopping? (0=NO): ");
            scanf("%d", &shallcontinue);
            printf("\n");
        } while (shallcontinue);


        printf("Your tasks are done for today - enjoy your free time!\n\n");

    return 0;
}