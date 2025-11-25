#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main(void) {
    struct Student s;

    scanf("%39s", s.name);
    scanf("%d", &s.roll);
    scanf("%f", &s.marks);

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

