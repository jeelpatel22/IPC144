/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  :Jeelkumar Vinodkumar Patel
Student ID#:115766222
Email      :jpatel391@myseneca.ca 
Section    :NEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
    int item1 = 111;
    int item2 = 222;
    int item3 = 111;
    double money1 = 111.4900;
    double money2 = 222.9900;
    double money3 = 334.4900;
    char ta1 = 'Y'; // ta = taxed
    char ta2 = 'N';
    char ta3 = 'N';
    float avg0 = (money1 + money2 + money3) / 3;

    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n",item1);
    printf("  Taxed: %c\n",ta1);
    printf("  Price: $%.4lf\n\n",money1);
    printf("Product-2 (ID:%d)\n",item2);
    printf("  Taxed: %c\n",ta2);
    printf("  Price: $%.4lf\n\n",money2);
    printf("Product-3 (ID:%d)\n",item3);
    printf("  Taxed: %c\n",ta3);
    printf("  Price: $%.4lf\n\n",money3);

    printf("The average of all prices is: $%.4lf\n\n",avg0);

    printf("About Relational and Logical Expressions!\n"
    "========================================\n"
    "1. These expressions evaluate to TRUE or FALSE\n"
    "2. FALSE: is always represented by integer value 0\n"
    "3. TRUE : is represented by any integer value other than 0\n\n");

    printf("Some Data Analysis...\n"
    "=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n",ta1 == 'Y');
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n",ta1 == 'N' || ta3 == 'N');
    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n",testValue, money3 < testValue);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n",money1+money2 <= money3);
    printf("5. Is the price of product 1 equal to or more than the price difference\n"
    "   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)\n\n",money1>=money3-money2, money3-money2);
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n",!(money2 >= avg0));
    printf("7. Based on product ID, product 1 is unique -> %d\n\n",!(item1 == item2 || item1 == item3));
    printf("8. Based on product ID, product 2 is unique -> %d\n\n",!(item2 == item3 || item2 == item1));
    printf("9. Based on product ID, product 3 is unique -> %d\n\n",!(item3 == item2 || item3 == item1));
    return 0;
}