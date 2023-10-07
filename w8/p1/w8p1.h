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


// ----------------------------------------------------------------------------
// structures




// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)


// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)


// 3. Opening Message (include the number of products that need entering)


// 4. Get user input for the details of cat food product


// 5. Display the formatted table header


// 6. Display a formatted record of cat food data


// 7. Logic entry point

#define MAX_NUM_ITEM 3



#define MIN_GRAMS_PER_JOULE 64




struct CatFoodInfo

{
	int numDetail;


	double rate;
	int joule;



	double heaviness;
};

int getIntPositive(int* values);


double getDoublePositive(double* values2);
void openingMessage(const int productInformation);
struct CatFoodInfo getCatFoodInfo(int numDetail);


void displayCatFoodHeader(void);


void displayCatFoodData(int numDetail, double* rate, double* heaviness, int joule);
void start();
