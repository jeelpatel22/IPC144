/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Jeelkumar Vinodkumar Patel
Student ID#: 115766222
Email      : jpatel391@myseneca.ca
Section    : E

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double j, k, l;
    int m, n, o;


    printf("Set Shirt Prices\n");
    printf("================\n");

    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &j);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &k);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &l);

    printf("\nShirt Store Price List");
    printf("\n======================");
    printf("\nSMALL  : $%0.2lf", j);
    printf("\nMEDIUM : $%0.2lf", k);
    printf("\nLARGE  : $%0.2lf", l);
    printf("\n\nPatty's shirt size is '%c'", patSize);
    printf("\nNumber of shirts Patty is buying: ");
    scanf("%d", &m);
    printf("\nTommy's shirt size is '%c'", tomSize);
    printf("\nNumber of shirts Tommy is buying: ");
    scanf("%d", &o);
    printf("\nSally's shirt size is '%c'", salSize);
    printf("\nNumber of shirts Sally is buying: ");
    scanf("%d", &n);
    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total");
    printf("\n-------- ---- ----- --- --------- --------- ---------");

    double  pattytax, pattytotal;
    double  sallytax, sallytotal;
    double  tommytax, tommytotal;

    int patty_subtotal, patty_tax, patty_total;
    int sally_subtotal, sally_tax, sally_total;
    int tommy_subtotal, tommy_tax, tommy_total;
    double Subtotal, Tax, Total;

   
    pattytax = TAX * m*j;
    pattytotal = m*j + pattytax;
   
    sallytax = TAX * n*k;
    sallytotal = n*k + sallytax;

    tommytax = TAX * o*l;
    tommytotal = o*l + tommytax;

    patty_subtotal = (m * j + 0.005) * 100;
    patty_tax = (pattytax + 0.005) * 100;
    patty_total = (pattytotal + 0.005) * 100;
    sally_subtotal = (n * k + 0.005) * 100;
    sally_tax = (sallytax + 0.005) * 100;
    sally_total = (sallytotal + 0.005) * 100;
    tommy_subtotal = (o * l + 0.005) * 100;
    tommy_tax = (tommytax + 0.005) * 100;
    tommy_total = (tommytotal + 0.005) * 100;

    printf("\nPatty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, j, m, patty_subtotal / 100.0, patty_tax / 100.0, patty_total / 100.0);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, k, n, sally_subtotal / 100.0, sally_tax / 100.0, sally_total / 100.0);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, l, o, tommy_subtotal / 100.0, tommy_tax / 100.0, tommy_total / 100.0);
    printf("-------- ---- ----- --- --------- --------- ---------");

    Subtotal = patty_subtotal + sally_subtotal + tommy_subtotal;
    Tax = patty_tax + sally_tax + tommy_tax;
    Total = patty_total + sally_total + tommy_total;
    printf("\n                         %0.4lf", Subtotal / 100.0);
    printf("   %0.4lf", Tax / 100.0);
    printf("  %0.4lf", Total / 100.0);

    int Aqty, AToonies, aToonies, BLoonies, bLoonies, CQuarters, cQuarters;
    int DDimes, dDimes, ENickels, eNickels, FPennies, fPennies;
    double avg;

    printf("\n\nDaily retail sales represented by coins");
    printf("\n=======================================");
    printf("\n\nSales EXCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n              %0.4lf", Subtotal / 100.0);

    Aqty = (Subtotal * 100) / 100;
    AToonies = Aqty / 200;
    aToonies = Aqty % 200;

    avg = Subtotal / (m + n + o);

    printf("\nToonies  %3d %9.4lf", AToonies, aToonies / 100.0);

    BLoonies = aToonies / 100;
    bLoonies = aToonies % 100;
    printf("\nLoonies  %3d %9.4lf", BLoonies, bLoonies / 100.0);

    CQuarters = bLoonies / 25;
    cQuarters = Aqty % 25;
    printf("\nQuarters %3d %9.4lf", CQuarters, cQuarters / 100.0);

    DDimes = cQuarters / 10;
    dDimes = cQuarters % 10;
    printf("\nDimes    %3d %9.4lf", DDimes, dDimes / 100.0);

    ENickels = dDimes / 5;
    eNickels = dDimes % 5;
    printf("\nNickels  %3d %9.4lf", ENickels, eNickels / 100.0);

    FPennies = eNickels / 1;
    fPennies = eNickels % 1;
    printf("\nPennies  %3d %9.4lf", FPennies, fPennies / 100.0);

    printf("\n\nAverage cost/shirt: $%0.4lf", avg / 100.0);

    printf("\n\nSales INCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n              %0.4lf", Total / 100.0);

    int balance, B_bal, B_balance, C_bal, C_balance, D_bal, D_balance;
    int E_bal, E_balance, F_bal, F_balance, G_bal, G_balance;
    double Average;


    balance = (Total * 100) / 100;

    B_bal = balance / 200;
    B_balance = balance % 200;
    printf("\nToonies  %3d %9.4lf", B_bal, B_balance / 100.0);

    C_bal = B_balance / 100;
    C_balance = B_balance % 100;
    printf("\nLoonies  %3d %9.4lf", C_bal, C_balance / 100.0);

    D_bal = C_balance / 25;
    D_balance = C_balance % 25;
    printf("\nQuarters %3d %9.4lf", D_bal, D_balance / 100.0);

    E_bal = D_balance / 10;
    E_balance = D_balance % 10;
    printf("\nDimes    %3d %9.4lf", E_bal, E_balance / 100.0);

    F_bal = E_balance / 5;
    F_balance = E_balance % 5;
    printf("\nNickels  %3d %9.4lf", F_bal, F_balance / 100.0);

    G_bal = F_balance / 1;
    G_balance = F_balance % 1;
    printf("\nPennies  %3d %9.4lf", G_bal, G_balance / 100.0);

    Average = Total / (m+n+o);

    printf("\n\nAverage cost/shirt: $%0.4lf\n", Average / 100.0);

    return 0;
}
