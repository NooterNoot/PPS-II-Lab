#include<stdio.h>

struct Student {
    char name[50];
    int roll;
    struct DOB {
        int date, month, year;
    }dob;
};

int main() {

    struct Student s;

    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Student Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Student Date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &s.dob.date, &s.dob.month, &s.dob.year);

    printf("Student Name: %s\n", s.name);
    printf("Student Roll No: %d\n", s.roll);
    printf("Student Date Of Birth: %d/%d/%d", s.dob.date, s.dob.month, s.dob.year);

    return 0;

}