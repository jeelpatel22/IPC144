/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 1
Full Name  :Jeelkumar Vinodkumar Patel
Student ID#:115766222
Email      :jpatel391@myseneca.ca
Section    :NEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "core.h"




void clearInputBuffer(void)
{



    while (getchar() != '\n')
    {
    
        ; // do nothing!
    
    }

}



void suspend(void)

{

    printf("<ENTER> to continue...");

    clearInputBuffer();

    putchar('\n');

}


int inputInt()
{

    int endoutput = -1;

    char valOfCharacter = '\0';
    
    int run = 1;
    
    do
    {
    
        scanf("%d%c", &endoutput, &valOfCharacter);
        
        if (valOfCharacter != '\n')
        {
            printf("Error! Input a whole number: ");
       
            clearInputBuffer();
        }
        else
        {
        
            run = 0;
        
        }

    } while (run);

    return endoutput;

}

int inputIntPositive()
{
    
    int endOutput = -1;
    
    do
    {

        endOutput = inputInt();

    } while (endOutput < 0 && printf("ERROR! Value must be > 0: "));

    return endOutput;

}

int inputIntRange(int lessValue, int moreValue)
{

    int endOutput = lessValue - 1;
    
    do
    {
    
        endOutput = inputInt();


    } while ((endOutput < lessValue || endOutput > moreValue) && printf("ERROR! Value must be between %d and %d inclusive: ", lessValue, moreValue));
   
    return endOutput;

}

char inputCharOption(const char* valuesCharacterString)
{

    char endOutput = '\0';
   
    char valueOfCharacter = '\0';
  
    int b = 0;
  
    int len = 0;

    while (valuesCharacterString[len] != '\0') 
    {

        len++;
    
    }

    int run = 1;
   
    do
    {
    
        scanf("%c%c", &endOutput, &valueOfCharacter);

        if (valueOfCharacter == '\n')
        
        {
        
            for (b = 0; b < len && run; b++)
            
                if (valuesCharacterString[b] == endOutput)
                
                    run = 0;
        }
        else 
        {
        
            clearInputBuffer();
        
        }

    } while (run && printf("ERROR: Character must be one of [%s]: ", valuesCharacterString));

    return endOutput;

}

void inputCString(char* valuesCharacterString, int lessValue, int moreValue)
{

    
    char adding[100] = { '\0' };
    
    int completed = 0;
    int r=0;
    int n = 0;
    
    do
    {
        scanf("%99[^\n]%*c", adding);
        for (n = 1; adding[n]!='\0'; n++)
        ; 

        if (lessValue == moreValue)
        {
           
            if (n == lessValue)
            {
                for(r=0;adding[r];r++)
                 {
                valuesCharacterString[r] = adding[r];
                }
                completed = 1;

            }

        }
        else
        {
           
            if (n >= lessValue && n <= moreValue)
            
            {
                 for(r=0;adding[r];r++)

                {
                valuesCharacterString[r] = adding[r];
               }
                completed = 1;

            }

        }

        if (!completed)
        {

            if (lessValue == moreValue)
            {

                printf("ERROR: String length must be exactly %d chars: ", lessValue);
           
            }

            else if (lessValue == 0 || n > moreValue)
            {

                printf("ERROR: String length must be no more than %d chars: ", moreValue);
            
            }
            else
            {

                printf("ERROR: String length must be between %d and %d chars: ", lessValue, moreValue);
           
            }


        }

    } while (!completed);

}
void displayFormattedPhone(const char* valuesCharacterString)
{

    int checkValidation = 1;
    
    int t = 0;
    
    if (valuesCharacterString != NULL)
    {

        while (valuesCharacterString[t] && checkValidation)
        {

            if (valuesCharacterString[t] < 48 || valuesCharacterString[t] > 57)
            {

                checkValidation = 0;
            
            }
            t++;
        }

    }

    
    if (checkValidation && t == 10)
    {
    
        printf("(");
        


        for (t = 0; t < 3; t++)
        {

            printf("%c", valuesCharacterString[t]);
        
        }

        printf(")");
        
        for (t = 3; t < 6; t++)
        {

            printf("%c", valuesCharacterString[t]);

        }
           
        printf("-");

        for (t = 6; t < 10; t++)
        {

            printf("%c", valuesCharacterString[t]);
        
        }
    
    }

    else
    {

        printf("(___)___-____");
    
    }

}




