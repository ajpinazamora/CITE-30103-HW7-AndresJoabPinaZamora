#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[40];
    int roll;
    float marks;
    struct Date dob;
};

int main(void) {
    struct Student s;

    scanf("%39s", s.name);
    scanf("%d", &s.roll);
    scanf("%f", &s.marks);
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("DOB: %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}

