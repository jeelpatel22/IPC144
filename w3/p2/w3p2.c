/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
        // You will need this when converting from grams to pounds (lbs)
        const double GRAMS_IN_LBS = 453.5924;

        char LC, MC, RC;  //LC=Light Coffee, MC=Medium Coffee, RC=Rich Coffee
        int BW1, BW2, BW3;  //BW= Beg 1 Weight, BW2=Beg 2 Weight, BW3=Beg 3 Weight
        char Cr1, Cr2, Cr3;  //Cr1=Cream1, Cr2=cream2, Cr3=Cream3

        char CoffeeStrength, CoffeewithCreamOrNot;
        int dailyServes;

        printf("Take a Break - Coffee Shop\n");
        printf("==========================");

        printf("\n\nEnter the coffee product information being sold today...");

        printf("\n\nCOFFEE-1...");
        printf("\nType ([L]ight,[M]edium,[R]ich): ");
        scanf(" %c", &LC);
        printf("Bag weight (g): ");
        scanf(" %d", &BW1);
        printf("Best served with cream ([Y]es,[N]o): ");
        scanf(" %c", &Cr1);

        printf("\nCOFFEE-2...");
        printf("\nType ([L]ight,[M]edium,[R]ich): ");
        scanf(" %c", &MC);
        printf("Bag weight (g): ");
        scanf(" %d", &BW2);
        printf("Best served with cream ([Y]es,[N]o): ");
        scanf(" %c", &Cr2);

        printf("\nCOFFEE-3...");
        printf("\nType ([L]ight,[M]edium,[R]ich): ");
        scanf(" %c", &RC);
        printf("Bag weight (g): ");
        scanf(" %d", &BW3);
        printf("Best served with cream ([Y]es,[N]o): ");
        scanf(" %c", &Cr3);

        printf("\n---+------------------------+---------------+-------+");
        printf("\n   |    Coffee              |   Packaged    | Best  |");
        printf("\n   |     Type               |  Bag Weight   | Served|");
        printf("\n   +------------------------+---------------+ With  |\n");
        printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
        printf("---+------------------------+---------------+-------|\n");
        printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (LC == 'l' || LC == 'L'), (LC == 'm' || LC == 'M'),
            (LC == 'r' || LC == 'R'), BW1, BW1 / GRAMS_IN_LBS, (Cr1 == 'y' || Cr1 == 'Y'));
        printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (MC == 'l' || MC == 'L'), (MC == 'm' || MC == 'M'),
            (MC == 'r' || MC == 'R'), BW2, BW2 / GRAMS_IN_LBS, (Cr2 == 'y' || Cr2 == 'Y'));
        printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (RC == 'l' || RC == 'L'), (RC == 'm' || RC == 'M'),
            (RC == 'r' || RC == 'R'), BW3, BW3 / GRAMS_IN_LBS, (Cr3 == 'y' || Cr3 == 'Y'));

        printf("\nEnter how you like your coffee and the coffee maker equipment you use...");

        printf("\n\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
        scanf(" %c", &CoffeeStrength);
        printf("Do you like your coffee with cream ([Y]es,[N]o): ");
        scanf(" %c", &CoffeewithCreamOrNot);
        printf("Typical number of daily servings: ");
        scanf(" %d", &dailyServes);

        printf("\nThe below table shows how your preferences align to the available products:");

        printf("\n\n--------------------+-------------+-------+");
        printf("\n  |     Coffee      |  Packaged   | With  |\n");
        printf("ID|      Type       | Bag Weight  | Cream |\n");
        printf("--+-----------------+-------------+-------+\n");
        printf(" 1|       %d         |      %d      |   %d   |\n", ((LC == 'l' || LC == 'L') && (CoffeeStrength == 'l' || CoffeeStrength == 'L')) || ((LC == 'm' || LC == 'M') && (CoffeeStrength == 'm' || CoffeeStrength == 'M')) || ((LC == 'r' || LC == 'R') && (CoffeeStrength == 'r' || CoffeeStrength == 'R')), ((dailyServes >= 1 && dailyServes <= 4) && (BW1 >= 0 && BW1 <= 250)) || ((dailyServes >= 5 && dailyServes <= 9) && (BW1 > 250 && BW1 <= 500)) || (dailyServes >= 10 && (BW1 > 500 && BW1 <= 1000)), ((Cr1 == 'y' || Cr1 == 'Y') && (CoffeewithCreamOrNot == 'y' || CoffeewithCreamOrNot == 'Y')) || ((Cr1 == 'n' || Cr1 == 'N') && (CoffeewithCreamOrNot == 'n' || CoffeewithCreamOrNot == 'N')));

        printf(" 2|       %d         |      %d      |   %d   |\n", ((MC == 'l' || MC == 'L') && (CoffeeStrength == 'l' || CoffeeStrength == 'L')) || ((MC == 'm' || MC == 'M') && (CoffeeStrength == 'm' || CoffeeStrength == 'M')) || ((MC == 'r' || MC == 'R') && (CoffeeStrength == 'r' || CoffeeStrength == 'R')), ((dailyServes >= 1 && dailyServes <= 4) && (BW2 >= 0 && BW2 <= 250)) || ((dailyServes >= 5 && dailyServes <= 9) && (BW2 > 250 && BW2 <= 500)) || (dailyServes >= 10 && (BW2 > 500 && BW2 <= 1000)), ((Cr2 == 'y' || Cr2 == 'Y') && (CoffeewithCreamOrNot == 'y' || CoffeewithCreamOrNot == 'Y')) || ((Cr2 == 'n' || Cr2 == 'N') && (CoffeewithCreamOrNot == 'n' || CoffeewithCreamOrNot == 'N')));

        printf(" 3|       %d         |      %d      |   %d   |\n", ((RC == 'l' || RC == 'L') && (CoffeeStrength == 'l' || CoffeeStrength == 'L')) || ((RC == 'm' || RC == 'M') && (CoffeeStrength == 'm' || CoffeeStrength == 'M')) || ((RC == 'r' || RC == 'R') && (CoffeeStrength == 'r' || CoffeeStrength == 'R')), ((dailyServes >= 1 && dailyServes <= 4) && (BW3 >= 0 && BW3 <= 250)) || ((dailyServes >= 5 && dailyServes <= 9) && (BW3 > 250 && BW3 <= 500)) || (dailyServes >= 10 && (BW3 > 500 && BW3 <= 1000)), ((Cr3 == 'y' || Cr3 == 'Y') && (CoffeewithCreamOrNot == 'y' || CoffeewithCreamOrNot == 'Y')) || ((Cr3 == 'n' || Cr3 == 'N') && (CoffeewithCreamOrNot == 'n' || CoffeewithCreamOrNot == 'N')));

        printf("\nEnter how you like your coffee and the coffee maker equipment you use...");

        printf("\n\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
        scanf(" %c", &CoffeeStrength);
        printf("Do you like your coffee with cream ([Y]es,[N]o): ");
        scanf(" %c", &CoffeewithCreamOrNot);
        printf("Typical number of daily servings: ");
        scanf(" %d", &dailyServes);

        printf("\nThe below table shows how your preferences align to the available products:");

        printf("\n\n--------------------+-------------+-------+");
        printf("\n  |     Coffee      |  Packaged   | With  |\n");
        printf("ID|      Type       | Bag Weight  | Cream |\n");
        printf("--+-----------------+-------------+-------+\n");
        printf(" 1|       %d         |      %d      |   %d   |\n", ((LC == 'l' || LC == 'L') && (CoffeeStrength == 'l' || CoffeeStrength == 'L')) || ((LC == 'm' || LC == 'M') && (CoffeeStrength == 'm' || CoffeeStrength == 'M')) || ((LC == 'r' || LC == 'R') && (CoffeeStrength == 'r' || CoffeeStrength == 'R')), ((dailyServes >= 1 && dailyServes <= 4) && (BW1 >= 0 && BW1 <= 250)) || ((dailyServes >= 5 && dailyServes <= 9) && (BW1 > 250 && BW1 <= 500)) || (dailyServes >= 10 && (BW1 > 500 && BW1 <= 1000)), ((Cr1 == 'y' || Cr1 == 'Y') && (CoffeewithCreamOrNot == 'y' || CoffeewithCreamOrNot == 'Y')) || ((Cr1 == 'n' || Cr1 == 'N') && (CoffeewithCreamOrNot == 'n' || CoffeewithCreamOrNot == 'N')));
        printf(" 2|       %d         |      %d      |   %d   |\n", ((MC == 'l' || MC == 'L') && (CoffeeStrength == 'l' || CoffeeStrength == 'L')) || ((MC == 'm' || MC == 'M') && (CoffeeStrength == 'm' || CoffeeStrength == 'M')) || ((MC == 'r' || MC == 'R') && (CoffeeStrength == 'r' || CoffeeStrength == 'R')), ((dailyServes >= 1 && dailyServes <= 4) && (BW2 >= 0 && BW2 <= 250)) || ((dailyServes >= 5 && dailyServes <= 9) && (BW2 > 250 && BW2 <= 500)) || (dailyServes >= 10 && (BW2 > 500 && BW2 <= 1000)), ((Cr2 == 'y' || Cr2 == 'Y') && (CoffeewithCreamOrNot == 'y' || CoffeewithCreamOrNot == 'Y')) || ((Cr2 == 'n' || Cr2 == 'N') && (CoffeewithCreamOrNot == 'n' || CoffeewithCreamOrNot == 'N')));
        printf(" 3|       %d         |      %d      |   %d   |\n", ((RC == 'l' || RC == 'L') && (CoffeeStrength == 'l' || CoffeeStrength == 'L')) || ((RC == 'm' || RC == 'M') && (CoffeeStrength == 'm' || CoffeeStrength == 'M')) || ((RC == 'r' || RC == 'R') && (CoffeeStrength == 'r' || CoffeeStrength == 'R')), ((dailyServes >= 1 && dailyServes <= 4) && (BW3 >= 0 && BW3 <= 250)) || ((dailyServes >= 5 && dailyServes <= 9) && (BW3 > 250 && BW3 <= 500)) || (dailyServes >= 10 && (BW3 > 500 && BW3 <= 1000)), ((Cr3 == 'y' || Cr3 == 'Y') && (CoffeewithCreamOrNot == 'y' || CoffeewithCreamOrNot == 'Y')) || ((Cr3 == 'n' || Cr3 == 'N') && (CoffeewithCreamOrNot == 'n' || CoffeewithCreamOrNot == 'N')));
        printf("\nHope you found a product that suits your likes!\n");


    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/
