/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P1)
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

#define SIZEMAX 70 //SIZEMAX = Maximum size of path length
#define SIZEMIN 10 //SiZEMIN = Minimum size of path length

#define FIVES 5 //FIVES = Entered number must be a multiple of 5
#define MAXLIVE 10 // MAXLIVE =  Maximum number of lives


struct playerinfo
{
    int lifeLine;
    char nameInput;
};

struct gameinfo
{
    int noofMoves;
    int playSize;
    int noofBombs[SIZEMAX];
    int noofTreasures[SIZEMAX];
};

int main(void)
{
    struct playerinfo configuration1;
    struct gameinfo configuration2;

    int j;

    printf("================================\n");
    printf("         Treasure Hunt!");
    printf("\n================================\n");
    printf("\nPLAYER Configuration");
    printf("\n--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf("%c", &configuration1.nameInput);

    do
    {
        printf("Set the number of lives: ");
        scanf("%d", &configuration1.lifeLine);

        if (configuration1.lifeLine < 1 || configuration1.lifeLine > MAXLIVE)
        {
            printf("     Must be between 1 and 10!\n");
        }
        else
        {
            printf("Player configuration set-up is complete\n");
        }
    } while (configuration1.lifeLine < 1 || configuration1.lifeLine > MAXLIVE);

    printf("\nGAME Configuration");
    printf("\n------------------\n");

    do
    {
        printf("Set the path length (a multiple of %d between %2d-%2d): ", FIVES, SIZEMIN, SIZEMAX);
        scanf("%d", &configuration2.playSize);

        if ((configuration2.playSize < SIZEMIN || configuration2.playSize > SIZEMAX) || configuration2.playSize % FIVES)
        {
            printf("     Must be a multiple of %d and between %2d-%2d!!!\n", FIVES, SIZEMIN, SIZEMAX);
        }
    } while ((configuration2.playSize < SIZEMIN || configuration2.playSize > SIZEMAX) || configuration2.playSize % FIVES);

    do
    {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &configuration2.noofMoves);

        if (configuration2.noofMoves < configuration1.lifeLine || configuration2.noofMoves >((int)(configuration2.playSize * 75 / 100)))
        {
            printf("    Value must be between %d and %d\n", configuration1.lifeLine, ((int)(configuration2.playSize * 75 / 100)));
        }
    } while (configuration2.noofMoves < configuration1.lifeLine || configuration2.noofMoves >((int)(configuration2.playSize * 75 / 100)));

    printf("\nBOMB Placement");
    printf("\n--------------\n");

    printf("Enter the bomb positions in sets of 5 where a value");
    printf("\nof 1=BOMB, and 0=NO BOMB. Space-delimit your input.");
    printf("\n(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", configuration2.playSize);

    for (j = 0; j < configuration2.playSize; j++)
    {
        printf("   Positions [%2d-%2d]: ", j + 1, j + 5);
        scanf("%d%d%d%d%d", &configuration2.noofBombs[j + 1], &configuration2.noofBombs[j + 2], &configuration2.noofBombs[j + 3], &configuration2.noofBombs[j + 4], &configuration2.noofBombs[j + 5]);
        j = j + 4;
    }
    printf("BOMB placement set");
    printf("\n\n");

    printf("TREASURE Placement\n");
    printf("------------------\n");

    printf("Enter the treasure placements in sets of 5 where a value\n");
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", configuration2.playSize);

    for (j = 0; j < configuration2.playSize; j++)
    {
        printf("   Positions [%2d-%2d]: ", j + 1, j + 5);
        scanf("%d%d%d%d%d", &configuration2.noofTreasures[j + 1], &configuration2.noofTreasures[j + 2], &configuration2.noofTreasures[j + 3], &configuration2.noofTreasures[j + 4], &configuration2.noofTreasures[j + 5]);
        j = j + 4;
    }
    printf("TREASURE placement set");
    printf("\n\nGAME configuration set-up is complete...\n\n");
    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");

    printf("Player:\n");
    printf("   Symbol     : %c\n", configuration1.nameInput);
    printf("   Lives      : %d\n", configuration1.lifeLine);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n");

    printf("\nGame:\n");
    printf("   Path Length: %d\n", configuration2.playSize);
    printf("   Bombs      : ");

    for (j = 0; j < configuration2.playSize; j++)
    {
        printf("%d", configuration2.noofBombs[j + 1]);
    }

    printf("\n   Treasure   : ");

    for (j = 0; j < configuration2.playSize; j++)
    {
        printf("%d", configuration2.noofTreasures[j + 1]);
    }

    printf("\n\n");
    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");



    return 0;

}
