#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float percentage;
};

union Student1 {
    char name[50];
    int roll_no;
    float percentage;
};

int main() {

    struct Student s1;
    union Student1 s2;
    printf("Size of Structure: %llu\n", sizeof(s1));
    printf("Size of Union: %llu\n", sizeof(s2));

}