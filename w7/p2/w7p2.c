/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P2)
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

#define MAXIMUMLENGTHOFPATH 70

#define		MAXIMUMNUMBEROFLIVES 10
#define MININUNNUMBEROFLIVES 1
#include <stdio.h>
struct PlayerInfo
{
	int	numberLives;
	char representPlayer;
	int tresuresNumber;



};
struct GameInfo
{
	int moves;
	int pathLenth;
	int bombs[MAXIMUMLENGTHOFPATH];
	int treasure[MAXIMUMLENGTHOFPATH];


};

int main()
{

	struct PlayerInfo player1;
	struct GameInfo game1;
	int i = 0;
	int j = 0;
	int nextMove, treasureFind = 0;

	char positionSign[MAXIMUMLENGTHOFPATH];


	printf("================================\n");
	printf("         Treasure Hunt!\n");
	printf("================================\n");
	printf("\nPLAYER Configuration\n");
	printf("--------------------\n");
	printf("Enter a single character to represent the player: ");
	scanf(" %c", &player1.representPlayer);
	do
	{
		printf("Set the number of lives: ");
		scanf("%d", &player1.numberLives);
		if (player1.numberLives < MININUNNUMBEROFLIVES || player1.numberLives>MAXIMUMNUMBEROFLIVES)
		{
			printf("     Must be between %d and %d!\n", MININUNNUMBEROFLIVES, MAXIMUMNUMBEROFLIVES);

		}
		else
		{
			printf("Player configuration set-up is complete\n\n");
		}
	} while (player1.numberLives < MININUNNUMBEROFLIVES || player1.numberLives>MAXIMUMNUMBEROFLIVES);
	printf("GAME Configuration\n");
	printf("------------------\n");
	do
	{
		printf("Set the path length (a multiple of 5 between 10-70): ");
		scanf("%d", &game1.pathLenth);
		if ((game1.pathLenth % 5) != 0 || game1.pathLenth < 10 || game1.pathLenth>MAXIMUMLENGTHOFPATH)
		{
			printf("     Must be a multiple of 5 and between 10-70!!!\n");

		}

	} while ((game1.pathLenth % 5) != 0 || game1.pathLenth < 10 || game1.pathLenth>MAXIMUMLENGTHOFPATH);
	do
	{
		printf("Set the limit for number of moves allowed: ");
		scanf("%d", &game1.moves);
		if (game1.moves < 3 || game1.moves>15)
		{
			printf("    Value must be between 3 and 15\n");
		}




	} while (game1.moves < 3 || game1.moves>15);


	printf("\nBOMB Placement");
	printf("\n--------------\n");
	printf("Enter the bomb positions in sets of 5 where a value\n");
	printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game1.pathLenth);
	for (i = 1; i <= game1.pathLenth; i = i + 5)
	{

		printf("   Positions [%2d-%2d]: ", i, i + 4);



		scanf("%d %d %d %d %d", &game1.bombs[i], &game1.bombs[i + 1], &game1.bombs[i + 2], &game1.bombs[i + 3], &game1.bombs[i + 4]);


	}
	printf("BOMB placement set\n\n");
	printf("TREASURE Placement\n");
	printf("------------------\n");
	printf("Enter the treasure placements in sets of 5 where a value\n");
	printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game1.pathLenth);

	for (i = 1; i <= game1.pathLenth; i = i + 5)
	{


		printf("   Positions [%2d-%2d]: ", i, i + 4);



		scanf("%d %d %d %d %d", &game1.treasure[i], &game1.treasure[i + 1], &game1.treasure[i + 2], &game1.treasure[i + 3], &game1.treasure[i + 4]);


	}
	printf("TREASURE placement set\n\n");
	printf("GAME configuration set-up is complete...\n\n");
	printf("------------------------------------\n");
	printf("TREASURE HUNT Configuration Settings\n");
	printf("------------------------------------\n");
	printf("Player:\n");
	printf("   Symbol     : %c\n", player1.representPlayer);
	printf("   Lives      : %d\n", player1.numberLives);
	printf("   Treasure   : [ready for gameplay]\n");
	printf("   History    : [ready for gameplay]\n\n");
	printf("Game:\n");
	printf("   Path Length: %d\n", game1.pathLenth);
	printf("   Bombs      : ");


	for (i = 0; i < game1.pathLenth; i++)
	{
		printf("%d", game1.bombs[i + 1]);
	}


	printf("\n   Treasure   : ");


	for (i = 0; i < game1.pathLenth; i++)
	{
		printf("%d", game1.treasure[i + 1]);
	}
	printf("\n\n====================================");

	printf("\n~ Get ready to play TREASURE HUNT! ~\n");
	
	printf("====================================\n\n");

	for (i = 0; i < game1.pathLenth; i++) {
		positionSign[i] = '-';
	}
	
	printf("  %s\n", positionSign);

	printf("  ");

	for (j = 0; j < game1.pathLenth; j++)


	{
		if ((j + 1) % 10 == 0)
		{


			printf("%d", (j + 1) / 10);
		}

		else
		{
			printf("|");

		}
	}
	
	printf("\n");

	printf("  ");
	for (j = 1; j <= game1.pathLenth; j++)
	{
		if ((j) % 10 == 0)
		{
			printf("0");
		}
		else if (j > 10)
		{
			printf("%d", j % 10);
		}
		else
		{
			printf("%d", j);
		}
	}
	printf("\n");


	printf("+---------------------------------------------------+\n");
	printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n",
		player1.numberLives, treasureFind, game1.moves);
	printf("+---------------------------------------------------+\n");


	do
	{



		do {

			printf("Next Move [1-20]: ");

			scanf("%d", &nextMove);
			if (nextMove < 1 || nextMove>20)
			{
				printf("  Out of Range!!!\n");
			}

		} while (nextMove < 1 || nextMove>20);

		printf("\n");

		if (positionSign[nextMove - 1] == '!' || positionSign[nextMove - 1] == '&' || positionSign[nextMove - 1] == '$' || positionSign[nextMove - 1] == '.')
		{
			printf("===============> Dope! You've been here before!\n\n");
			game1.moves++;
		}

		else if (game1.treasure[nextMove] == 1 && game1.bombs[nextMove] == 1)
		{

			positionSign[nextMove - 1] = '&';

			printf("===============> [&] !!! BOOOOOM !!! [&]\n");

			printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n\n");

			player1.numberLives--;

			treasureFind++;


		}

		else if (game1.treasure[nextMove] == 1)
		{
			positionSign[nextMove - 1] = '$';
			printf("===============> [$] $$$ Found Treasure! $$$ [$]\n\n");
			treasureFind++;


		}


		else if (game1.bombs[nextMove] == 1)
		{
			positionSign[nextMove - 1] = '!';

			player1.numberLives = player1.numberLives - 1;
			printf("===============> [!] !!! BOOOOOM !!! [!]\n\n");
		}


		else if (game1.bombs[nextMove] == 0 && game1.treasure[nextMove] == 0)
		{


			printf("===============> [.] ...Nothing found here... [.]\n\n");
			positionSign[nextMove - 1] = '.';

		}

		if (player1.numberLives == 0)
		{
			printf("No more LIVES remaining!\n\n");
		}


		printf("  ");
		for (i = 0; i < nextMove - 1; i++)
		{
			printf(" ");

		}
		printf("V\n");


		printf("  %s\n", positionSign);

		printf("  ");

		for (j = 0; j < game1.pathLenth; j++)


		{
			if ((j + 1) % 10 == 0)
			{


				printf("%d", (j + 1) / 10);
			}

			else
			{
				printf("|");

			}
		}
		
		printf("\n");

		printf("  ");
		for (j = 1; j <= game1.pathLenth; j++)
		{
			if ((j) % 10 == 0)
			{
				printf("0");
			}
			else if (j > 10)
			{
				printf("%d", j % 10);
			}
			else
			{
				printf("%d", j);
			}
		}




		game1.moves--;

		
		printf("\n+---------------------------------------------------+\n");
		
		printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n",player1.numberLives, treasureFind, game1.moves);
		
		printf("+---------------------------------------------------+\n");



	} while ((player1.numberLives != 0 && game1.moves != 0));


	printf("\n##################\n");

	printf("#   Game over!   #\n");
	
	printf("##################\n");
	
	printf("\nYou should play again and try to beat your score!\n");

	return 0;
}
