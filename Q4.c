#include <stdio.h>

struct Address {
    char city[50];
    char zipCode[10];
    char state[50];
} adr;

struct student {
    int rollno;
    char name[50];
    float CGPA;
    struct Address adr;
} std;

int main(){
    printf("Enter student roll number: ");
    scanf("%d", &std.rollno);
    printf("Enter student name: ");
    scanf("%s", std.name);
    printf("Enter student CGPA: ");
    scanf("%f", &std.CGPA);
    printf("Enter student city: ");
    scanf("%s", std.adr.city);
    printf("Enter student zip code: ");
    scanf("%s", std.adr.zipCode);
    printf("Enter student state: ");
    scanf("%s", std.adr.state);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", std.rollno);
    printf("Name: %s\n", std.name);
    printf("CGPA: %.2f\n", std.CGPA);
    printf("City: %s\n", std.adr.city);
    printf("Zip Code: %s\n", std.adr.zipCode);
    printf("State: %s\n", std.adr.state);

    return 0;
}