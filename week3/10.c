#include<stdio.h>

typedef struct Employee {
    char name[50];
    int id;
    struct Salary {
        float basic, hra, da, pf, gross;
    }s;
} E;

void display(E e);

int main() {

    struct Employee e;
    printf("Enter Employee Name: ");
    scanf("%s", e.name);
    printf("Enter Employee Id: ");
    scanf("%d", &e.id);
    printf("Enter Employee Salary: ");
    scanf("%f", &e.s.basic);

    e.s.hra = 15 * e.s.basic /100;
    e.s.da = 45 * e.s.basic /100;
    e.s.pf = 12 * e.s.basic /100;
    e.s.gross = e.s.basic + e.s.hra + e.s.da + e.s.pf;

    display(e);

    return 0;

}

void display(E e) {
    printf("Employee HRA: %f\n", e.s.hra);
    printf("Employee DA: %f\n", e.s.da);
    printf("Employee PF: %f\n", e.s.pf);
    printf("Employee Gross Salary: %f\n", e.s.gross);
}