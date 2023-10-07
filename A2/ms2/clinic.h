/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 2
Full Name  : Jeelkumar Vinodkumar Patel
Student ID#: 115766222
Email      : jpatel391@myseneca.ca
Section    : NEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


#ifndef CLINIC_H

#define CLINIC_H


#define FMT_FORM 1

#define FMT_TABLE 2

// C Strings: array sizes
#define NAME_LEN 15


#define PHONE_DESC_LEN 4

#define PHONE_LEN 10




struct Phone
{

    char description[PHONE_DESC_LEN + 1];


    char number[PHONE_LEN + 1];

};

struct Patient 
{

    int patientNumber;

    char name[NAME_LEN];

    struct Phone phone;

};


struct ClinicData
{
 
    struct Patient* patients;


    int maxPatient;

};




void displayPatientTableHeader(void);

void displayPatientData(const struct Patient* patient, int fmt);

void menuMain(struct ClinicData* data);

void menuPatient(struct Patient patient[], int max);

void menuPatientEdit(struct Patient* patient);


void displayAllPatients(const struct Patient patient[], int max, int fmt);


void searchPatientData(const struct Patient patient[], int max);

void addPatient(struct Patient patient[], int max);


void editPatient(struct Patient patient[], int max);

// Remove a patient record from the patient array
void removePatient(struct Patient patient[], int max);

void searchPatientByPatientNumber(const struct Patient patient[], int max);


void searchPatientByPhoneNumber(const struct Patient patient[], int max);

int nextPatientNumber(const struct Patient patient[], int max);


int findPatientIndexByPatientNum(int patientNumber,
    const struct Patient patient[], int max);



void inputPatient(struct Patient* patient);

void inputPhoneData(struct Phone* phone);

#endif 