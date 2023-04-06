#include<stdio.h>
#include<string.h>

struct Books {
    char title[50];
    char author[50];
    int book_id;
    float edition;
};

int main() {
    struct Books b1, b2;
    strcpy(b1.title, "C Programming 1");
    strcpy(b1.author, "Dennis Ritchie");
    b1.book_id = 649507;
    b1.edition = 1.1;
    strcpy(b2.title, "C Programming 2");
    strcpy(b2.author, "Balaguruswamy");
    b2.book_id = 649508;
    b2.edition = 1.2;
    printf("Book 1 Title: %s\n", b1.title);
    printf("Book 1 Author: %s\n", b1.author);
    printf("Book 1 Book id: %d\n", b1.book_id);
    printf("Book 1 Edition: %f\n", b1.edition);
    printf("Book 2 Title: %s\n", b2.title);
    printf("Book 2 Author: %s\n", b2.author);
    printf("Book 2 Book id: %d\n", b2.book_id);
    printf("Book 2 Edition: %f\n", b2.edition);

}