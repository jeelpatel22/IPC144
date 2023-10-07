/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
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


#include "w8p1.h"

int getIntPositive(int* values)
{

	int j = 0;
	do
	{
		scanf(" %d", &j);



		if (j < 1)
			printf("ERROR: Enter a positive value: "); 

	} while (j < 1);


	if (values != NULL)

	{
		*values = j;
	}

	return j;
}


double getDoublePositive(double* values2)


{
	double j = 0;

	do

	{
		scanf("%lf", &j);
		if (j < 1)

		{

			printf("ERROR: Enter a positive value: ");

		}



	} while (j < 1);

	if (values2 != 0)
	{

		*values2 = j;

		

	}
	return j;
}
	

	void openingMessage(const int productInformation)
	{

		printf("Cat Food Cost Analysis\n");
		printf("======================\n\n");


		printf("Enter the details for %d dry food bags of product data for analysis.\n", productInformation);
		printf("NOTE: A 'serving' is %dg\n", MIN_GRAMS_PER_JOULE);
		return;
	}

	struct CatFoodInfo getCatFoodInfo(int numDetail) 
	{

		struct CatFoodInfo petFood; 
		petFood.numDetail = numDetail;


		double costs = 0; 

		printf("PRICE         : $");




		while (costs <= 0)


			costs = getDoublePositive(NULL);

		petFood.rate = costs; 
		printf("WEIGHT (LBS)  : ");


		double heaviness1 = 0;
		while (heaviness1 <= 0)

			heaviness1 = getDoublePositive(NULL);
		petFood.heaviness = heaviness1;
		printf("CALORIES/SERV.: ");



		int joule1 = 0;
		while (joule1 <= 0)
			joule1 = getIntPositive(NULL);
		petFood.joule = joule1; 

		return petFood;
	}

	void displayCatFoodHeader(void)

	{
		printf("\nSKU         $Price    Bag-lbs Cal/Serv\n");
		printf("------- ---------- ---------- --------\n");


	}



	void displayCatFoodData(int numDetail, double* rate, double* heaviness1, int joule)

	{
		printf("%07d %10.2lf %10.1lf %8d\n", numDetail, *rate, *heaviness1, joule);

	}

	void start()
	{


	struct	CatFoodInfo petFood[MAX_NUM_ITEM];
		openingMessage(MAX_NUM_ITEM);

		int p, numdetail1;
		for (p = 0; p < MAX_NUM_ITEM; p++)
		{

			printf("\nCat Food Product #%d", p + 1);
			printf("\n--------------------\n");
			printf("SKU           : ");



			numdetail1 = 0;
			while (numdetail1 <= 0)


				numdetail1 = getIntPositive(NULL);
			petFood[p] = getCatFoodInfo(numdetail1);

		}


		displayCatFoodHeader();

		for (p = 0; p < MAX_NUM_ITEM; p++)



			displayCatFoodData(petFood[p].numDetail, &petFood[p].rate, &petFood[p].heaviness, petFood[p].joule);

		return;
	}




// System Libraries


// User Libraries


// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)


// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)


// 3. Opening Message (include the number of products that need entering)


// 4. Get user input for the details of cat food product


// 5. Display the formatted table header

// 6. Display a formatted record of cat food data


// 7. Logic entry point
