 #include <stdio.h>

struct Book {
    char title[50];
    char author[50];
};

struct Student {
    int id;
    char name[50];
    int year;
    float gpa;
    struct Book borrowedBook;   // Nested Structure
};

void printStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Year: %d\n", s.year);
    printf("GPA: %.2f\n", s.gpa);
    printf("Borrowed Book: %s\n", s.borrowedBook.title);
    printf("Author: %s\n", s.borrowedBook.author);
}

int main() {

    struct Student student1 = {
        101,
        "Yaseen",
        2026,
        3.80,
        {"C Programming", "Dennis Ritchie"}
    };

    printStudent(student1);

    return 0;
}