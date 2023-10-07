/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 2
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

#include<string.h>

// include the user library "core" so we can use those functions


#include "core.h"
// include the user library "clinic" where the function prototypes are declared


#include "clinic.h"


//////////////////////////////////////
// DISPLAY FUNCTIONS
//////////////////////////////////////

// !!! DO NOT MODIFY THIS FUNCTION DEFINITION !!!
// Display's the patient table header (table format)
void displayPatientTableHeader(void)
{
    printf("Pat.# Name            Phone#\n"
           "----- --------------- --------------------\n");
}

// !!! DO NOT MODIFY THIS FUNCTION DEFINITION !!!
// Displays a single patient record in FMT_FORM | FMT_TABLE format
void displayPatientData(const struct Patient* patient, int fmt)
{
    if (fmt == FMT_FORM)
    {
        printf("Name  : %s\n"
               "Number: %05d\n"
               "Phone : ", patient->name, patient->patientNumber);
        displayFormattedPhone(patient->phone.number);
        printf(" (%s)\n", patient->phone.description);
    }
    else
    {
        printf("%05d %-15s ", patient->patientNumber,
               patient->name);
        displayFormattedPhone(patient->phone.number);
        printf(" (%s)\n", patient->phone.description);
    }
}


//////////////////////////////////////
// MENU & ITEM SELECTION FUNCTIONS
//////////////////////////////////////

// !!! DO NOT MODIFY THIS FUNCTION DEFINITION !!!
// main menu
void menuMain(struct ClinicData* data)
{
    int selection;

    do {
        printf("Veterinary Clinic System\n"
               "=========================\n"
               "1) PATIENT     Management\n"
               "2) APPOINTMENT Management\n"
               "-------------------------\n"
               "0) Exit System\n"
               "-------------------------\n"
               "Selection: ");
        selection = inputIntRange(0, 2);
        putchar('\n');
        switch (selection)
        {
        case 0:
            printf("Are you sure you want to exit? (y|n): ");
            selection = !(inputCharOption("yn") == 'y');
            putchar('\n');
            if (!selection)
            {
                printf("Exiting system... Goodbye.\n\n");
            }
            break;
        case 1:
            menuPatient(data->patients, data->maxPatient);
            break;
        case 2:
            printf("<<< Feature not yet available >>>\n\n");
            break;
        }
    } while (selection);
}

// !!! DO NOT MODIFY THIS FUNCTION DEFINITION !!!
// Menu: Patient Management
void menuPatient(struct Patient patient[], int max)
{
    int selection;

    do {
        printf("Patient Management\n"
               "=========================\n"
               "1) VIEW   Patient Data\n"
               "2) SEARCH Patients\n"
               "3) ADD    Patient\n"
               "4) EDIT   Patient\n"
               "5) REMOVE Patient\n"
               "-------------------------\n"
               "0) Previous menu\n"
               "-------------------------\n"
               "Selection: ");
        selection = inputIntRange(0, 5);
        putchar('\n');
        switch (selection)
        {
        case 1:
            displayAllPatients(patient, max, FMT_TABLE);
            suspend();
            break;
        case 2:
            searchPatientData(patient, max);
            break;
        case 3:
            addPatient(patient, max);
            suspend();
            break;
        case 4:
            editPatient(patient, max);
            break;
        case 5:
            removePatient(patient, max);
            suspend();
            break;
        }
    } while (selection);
}

// !!! DO NOT MODIFY THIS FUNCTION DEFINITION !!!
// Menu: Patient edit
void menuPatientEdit(struct Patient* patient)
{
    int selection;

    do {
        printf("Edit Patient (%05d)\n"
               "=========================\n"
               "1) NAME : %s\n"
               "2) PHONE: ", patient->patientNumber, patient->name);
        
        displayFormattedPhone(patient->phone.number);
        
        printf("\n"
               "-------------------------\n"
               "0) Previous menu\n"
               "-------------------------\n"
               "Selection: ");
        selection = inputIntRange(0, 2);
        putchar('\n');

        if (selection == 1)
        {
            printf("Name  : ");
            inputCString(patient->name, 1, NAME_LEN);
            putchar('\n');
            printf("Patient record updated!\n\n");
        }
        else if (selection == 2)
        {
            inputPhoneData(&patient->phone);
            printf("Patient record updated!\n\n");
        }

    } while (selection);
}


// ---------------------------------------------------------------------------
// !!! Put all the remaining function definitions below !!!
// Note: Maintain the same order/sequence as it is listed in the header file
// ---------------------------------------------------------------------------

// Display's all patient data in the FMT_FORM | FMT_TABLE format
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)

void displayAllPatients(const struct Patient patient[], int max, int fmt)
{
    int m = 0;

    int idicatedNumber = 0;

    displayPatientTableHeader();

    for (m = 0; m < max; m++)
    {

        if (patient[m].patientNumber != 0)
        {

            displayPatientData(&patient[m], fmt);

            idicatedNumber++;

        }

    }

    if (idicatedNumber == 0)
    {

        printf("*** No records found ***");

    }

    printf("\n");

}


// Search for a patient record based on patient number or phone number
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)
void searchPatientData(const struct Patient patient[], int max)
{

    int preference = -1;

    do
    {

        printf("Search Options\n==========================\n1) By patient number\n2) By phone number\n..........................\n0) Previous menu\n..........................\nSelection: ");

        preference = inputInt(0, 2);

        putchar('\n');

        if (preference == 1)
        {

            searchPatientByPatientNumber(patient, max);

            putchar('\n');

            suspend();

        }
        if (preference == 2)
        {

            searchPatientByPhoneNumber(patient, max);

            putchar('\n');

            suspend();

        }

    } while (preference != 0);

}

// Add a new patient record to the patient array
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)
void addPatient(struct Patient patient[], int max)
{

    int m = 0;

    int indicator = -1;

    for (m = 0; m < max && indicator == -1; m++)
    {

        if (patient[m].patientNumber == 0)
        {

            indicator = m;

        }
    }
    if (indicator == -1)
    {

        printf("ERROR: Patient listing is FULL!\n\n");

    }

    else
    {

        patient[indicator].patientNumber = nextPatientNumber(patient, max);

        inputPatient(&patient[indicator]);

    }

}

// Edit a patient record from the patient array
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)
void editPatient(struct Patient patient[], int max)
{

    printf("Enter the patient number: ");

    int amountOfPatient = inputInt();

    putchar('\n');

    int indicator = findPatientIndexByPatientNum(amountOfPatient, patient, max);

    if (indicator == -1)
    {

        printf("ERROR: Patient record not found!\n\n");

    }

    else
    {

        menuPatientEdit(&patient[indicator]);

    }

}


// Remove a patient record from the patient array
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)

void removePatient(struct Patient patient[], int max)
{

    printf("Enter the patient number: ");

    int amountOfPatient = inputInt();

    int indicator = findPatientIndexByPatientNum(amountOfPatient, patient, max);

    if (indicator == -1)
    {

        printf("\nERROR: Patient record not found!\n\n");

    }
    else
    {

        putchar('\n');

        displayPatientData(&patient[indicator], FMT_FORM);

        printf("\nAre you sure you want to remove this patient record? (y/n): ");

        int outcome = inputCharOption("yn");

        if (outcome == 'y')
        {

            patient[indicator].patientNumber = 0;

            printf("Patient record has been removed!\n\n");

        }
        else
        {

            printf("Operation aborted.\n\n");

        }

    }

}

//////////////////////////////////////
// UTILITY FUNCTIONS
//////////////////////////////////////

// Search and display patient record by patient number (form)
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)

void searchPatientByPatientNumber(const struct Patient patient[], int max)
{

    printf("Search by patient number: ");

    int amountOfPatient = inputInt();

    putchar('\n');

    int indicator = findPatientIndexByPatientNum(amountOfPatient, patient, max);

    if (indicator == -1)
    {

        printf("*** No records found ***\n");

    }

    else
    {

        displayPatientData(&patient[indicator], FMT_FORM);

    }

}
// Search and display patient records by phone number (tabular)
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)
void searchPatientByPhoneNumber(const struct Patient patient[], int max)
{
    int m = 0;

    char entryMobile[11] = { 0 };

    int indicatedNumber = 0;

    printf("Search by phone number: ");

    inputCString(entryMobile, 10, 10);

    putchar('\n');

    displayPatientTableHeader();

    for (m = 0; m < max; m++)
    {

        if (strcmp(entryMobile, patient[m].phone.number) == 0)
        {

            displayPatientData(&patient[m], FMT_TABLE);

            indicatedNumber++;

        }

    }

    if (indicatedNumber == 0)
    {

        printf("\n*** No records found ***\n");

    }

}

// Get the next highest patient number
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)
int nextPatientNumber(const struct Patient patient[], int max)
{

    int m = 0;

    int largest = patient[m].patientNumber;

    for (m = 1; m < max; m++)
    {

        if (patient[m].patientNumber > largest)

            largest = patient[m].patientNumber;

    }

    return largest + 1;

}

// Find the patient array index by patient number (returns -1 if not found)
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)
int findPatientIndexByPatientNum(int patientNumber, const struct Patient patient[], int max)
{

    int m = 0;

    int outcome = -1;

    for (m = 0; m < max && outcome == -1; m++)
    {

        if (patientNumber == patient[m].patientNumber)
        {

            outcome = m;

        }

    }

    return outcome;

}


//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////

// Get user input for a new patient record
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)
void inputPatient(struct Patient* patient)
{

    printf("Patient Data Input\n------------------\nNumber: %05d\nName  : ", patient->patientNumber);

    inputCString(patient->name, 1, NAME_LEN);

    putchar('\n');

    inputPhoneData(&patient->phone);

    printf("*** New patient record added ***\n\n");

}


// Get user input for phone contact information
// (ToDo: PUT THE FUNCTION DEFINITION BELOW)
void inputPhoneData(struct Phone* phone)
{

    printf("Phone Information\n-----------------\nHow will the patient like to be contacted?\n1. Cell\n2. Home\n3. Work\n4. TBD\nSelection: ");

    int preference = inputInt(1, 4);

    putchar('\n');

    if (preference == 4)
    {

        strcpy(phone->description, "TBD");

        phone->number[0] = 0;

    }

    else
    {

        if (preference == 1)

            strcpy(phone->description, "CELL");

        if (preference == 2)

            strcpy(phone->description, "HOME");

        if (preference == 3)

            strcpy(phone->description, "WORK");

        printf("Contact: %s\n", phone->description);

        printf("Number : ");

        inputCString(phone->number, 10, 10);

        putchar('\n');

    }

}
