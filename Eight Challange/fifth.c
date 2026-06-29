 #include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int year;
    float gpa;
};

void modifyGPA(struct Student *s, float newGPA) {
    s->gpa = newGPA;
}

int main() {

    struct Student student1 = {101, "Yaseen", 2026, 3.20};

    printf("Before Modification:\n");
    printf("ID   : %d\n", student1.id);
    printf("Name : %s\n", student1.name);
    printf("Year : %d\n", student1.year);
    printf("GPA  : %.2f\n", student1.gpa);

    modifyGPA(&student1, 3.90);

    printf("\nAfter Modification:\n");
    printf("ID   : %d\n", student1.id);
    printf("Name : %s\n", student1.name);
    printf("Year : %d\n", student1.year);
    printf("GPA  : %.2f\n", student1.gpa);

    return 0;
}