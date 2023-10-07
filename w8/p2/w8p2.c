/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #8 (P2)
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


// System Libraries
#include <stdio.h>

// User-Defined Libraries
#include "w8p2.h"

// ----------------------------------------------------------------------------
// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
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

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

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

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int productInformation)
{

	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");

	printf("Enter the details for %d dry food bags of product data for analysis.\n", productInformation);
	printf("NOTE: A 'serving' is %dg\n", MIN_GRAMS_PER_JOULE);

	return;
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int numDetail)
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


// 5. Display the formatted table header

void displayCatFoodHeader(void)

{
	printf("\nSKU         $Price    Bag-lbs Cal/Serv\n");

	printf("------- ---------- ---------- --------\n");


}

// 6. Display a formatted record of cat food data

void displayCatFoodData(int numDetail, double* rate, double* heaviness1, int joule)

{
	printf("%07d %10.2lf %10.1lf %8d\n", numDetail, *rate, *heaviness1, joule);

}

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)

double convertLbsKg(const double* pound_weight, double* kgs_lb) // lbs_wei_ght=pound_weight

{
	double mn;

	mn = *pound_weight / CHANGEKGLB;

	if (kgs_lb != NULL)
	{
		*kgs_lb = mn;
	}


	return(mn);
}

// 9. convert lbs: g (call convertKG, then * 1000)

int convertLbsG(const double* pound_weight2, int* gm)
{
	int l;

	l = convertLbsKg(pound_weight2, 0) * 1000;

	if (gm != NULL)
	{

		*gm = l;

	}


	return(l);
}

// 10. convert lbs: kg and g

void convertLbs(const double* lb_kg, double* kg_kilo, int* gm2)
{

	convertLbsKg(lb_kg, kg_kilo);

	convertLbsG(lb_kg, gm2);

}

// 11. calculate: servings based on gPerServ

double calculateServings(const int heaviness_volume, const int sum_calculation, double* result_last)
{
	double r;

	r = (double)sum_calculation / (double)heaviness_volume;

	if (result_last != NULL)
	{
		*result_last = r;
	}


	return(r);
}

// 12. calculate: cost per serving

double calculateCostPerServing(const double* rate3, const double* outcome, double* result_outcome)

{
	double price_cost = 0;

	price_cost = *rate3 / *outcome;

	if (result_outcome != NULL)
	{
		*result_outcome = price_cost;
	}

	return(price_cost);
}

// 13. calculate: cost per calorie

double calculateCostPerCal(const double* rate_price, const double* joule_1, double* rate_joule)
{
	double price_cost = 0;

	price_cost = *rate_price / *joule_1;


	if (rate_joule != NULL)
	{
		*rate_joule = price_cost;
	}


	return(price_cost);

}

// 14. Derive a reporting detail record based on the cat food product data

struct ReportData calculateReportData(const struct CatFoodInfo food_detail)
{

	struct ReportData report_info;

	double joules;

	report_info.fair_sku = food_detail.numDetail;

	report_info.charges = food_detail.rate;

	report_info.heaviness1 = food_detail.heaviness;

	report_info.joule = food_detail.joule;


	report_info.kilograms = convertLbsKg(&food_detail.heaviness, &report_info.kilograms);

	report_info.grams = convertLbsG(&food_detail.heaviness, &report_info.grams);

	report_info.service_total = calculateServings(MIN_GRAMS_PER_JOULE, report_info.grams, &report_info.service_total);

	report_info.weightServes = calculateCostPerServing(&report_info.charges, &report_info.service_total, &report_info.weightServes);

	joules = report_info.joule * report_info.service_total;

	report_info.service_joule = calculateCostPerCal(&report_info.charges, &joules, &report_info.service_joule);



	return(report_info);
}

// 15. Display the formatted table header for the analysis results

void displayReportHeader(void)
{

	printf("\nAnalysis Report (Note: Serving = %dg)\n", MIN_GRAMS_PER_JOULE);
	printf("---------------\n");

	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");

	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table

void displayReportData(const struct ReportData report_info, const int low_price)
{

	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", report_info.fair_sku, report_info.charges, report_info.heaviness1, report_info.kilograms, report_info.grams,
	                                                                	report_info.joule, report_info.service_total, report_info.weightServes, report_info.service_joule);
}

// 17. Display the findings (cheapest)

void displayFinalAnalysis(const struct CatFoodInfo petFood)
{

	printf("\nFinal Analysis\n--------------\n");

	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%.2lf\n\n", petFood.numDetail, petFood.rate);

	printf("Happy shopping!\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start()
{
	int p, numdetail1, s, a;
	int lowest_product = 0;

	struct	CatFoodInfo petFood[MAX_NUM_ITEM];

	openingMessage(MAX_NUM_ITEM);

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

	struct ReportData reportA[MAX_NUM_ITEM];

	displayReportHeader();

	for (s = 0; s < MAX_NUM_ITEM; s++)
	{
		reportA[s] = calculateReportData(petFood[s]);

		if (reportA[s].weightServes < reportA[s - 1].weightServes)
		{
			lowest_product = s;
		}
	}


	for (a = 0; a < MAX_NUM_ITEM; a++)
	{
		struct ReportData b = { 0 };

		b = reportA[a];

		displayReportData(b, lowest_product);

		if (lowest_product == a)
		{
			printf(" ***");
		}

		printf("\n");
	}


	displayFinalAnalysis(petFood[lowest_product]);


	return;
}
