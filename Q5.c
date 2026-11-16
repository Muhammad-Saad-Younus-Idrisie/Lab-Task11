#include <stdio.h>

struct HospitalRecord {
    char hospitalName[50];
    char address[100];
    int numBeds;

    struct PatientInfo {
        int id;
        char name[50];
        int age;
        char gender[10];
    } patient;
} hosp, *hosp_ptr;

int main() {
    hosp_ptr = &hosp;
    printf("Enter hospital name: ");
    scanf(" %[^\n]", hosp_ptr->hospitalName);
    printf("Enter hospital address: ");
    scanf(" %[^\n]", hosp_ptr->address);
    printf("Enter number of beds: ");
    scanf("%d", &hosp_ptr->numBeds);

    // Input inner struct details using (->) and (.)
    printf("\nEnter patient ID: ");
    scanf("%d", &hosp_ptr->patient.id);
    printf("Enter patient name: ");
    scanf(" %[^\n]", hosp_ptr->patient.name);
    printf("Enter patient age: ");
    scanf("%d", &hosp_ptr->patient.age);
    printf("Enter patient gender: ");
    scanf(" %[^\n]", hosp_ptr->patient.gender);

    // Print outer and inner details
    printf("\n--- Hospital Details ---\n");
    printf("Name: %s\n", hosp_ptr->hospitalName);
    printf("Address: %s\n", hosp_ptr->address);
    printf("Beds: %d\n", hosp_ptr->numBeds);

    printf("\n--- Patient Details ---\n");
    printf("ID: %d\n", hosp_ptr->patient.id);
    printf("Name: %s\n", hosp_ptr->patient.name);
    printf("Age: %d\n", hosp_ptr->patient.age);
    printf("Gender: %s\n", hosp_ptr->patient.gender);

    return 0;
}